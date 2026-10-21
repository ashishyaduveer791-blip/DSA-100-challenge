#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

#define MAXN 20
#define MAXB 1000

struct Item
{
    int id;
    int p;
    int s;
};

static int n = 4;                         /* number of items */
static int B = 6;                         /* capacity */
static int p[MAXN + 1] = {0, 3, 2, 4, 4}; /* profits */
static int s[MAXN + 1] = {0, 4, 3, 2, 3}; /* sizes */

static int A[MAXN + 1][MAXB + 1];

/* Criterion 1: largest profit first */
static int byProfit(const void *a, const void *b)
{
    const Item *x = (const Item *)a;
    const Item *y = (const Item *)b;
    if (y->p != x->p)
    {
        return y->p - x->p;
    }
    return x->id - y->id;
}

/* Criterion 2: smallest size first */
static int bySize(const void *a, const void *b)
{
    const Item *x = (const Item *)a;
    const Item *y = (const Item *)b;
    if (x->s != y->s)
    {
        return x->s - y->s;
    }
    return x->id - y->id;
}

/* Criterion 3: largest profit/size ratio first (compared exactly with integers) */
static int byRatio(const void *a, const void *b)
{
    const Item *x = (const Item *)a;
    const Item *y = (const Item *)b;
    long lhs = (long)x->p * y->s;
    long rhs = (long)y->p * x->s;
    if (lhs != rhs)
    {
        return (rhs > lhs) ? 1 : -1;
    }
    return x->id - y->id;
}

static void sortedItems(Item it[], int (*cmp)(const void *, const void *))
{
    int i;
    for (i = 1; i <= n; i++)
    {
        it[i - 1].id = i;
        it[i - 1].p = p[i];
        it[i - 1].s = s[i];
    }
    std::qsort(it, n, sizeof(Item), cmp);
}

static int greedy01(int (*cmp)(const void *, const void *), const char *name, int take[])
{
    Item it[MAXN];
    int i, cap = B, profit = 0;
    for (i = 0; i < n; i++)
        take[i] = 0;
    sortedItems(it, cmp);

    std::cout << "Greedy by " << name << "\n";
    std::cout << "Order considered: ";
    for (i = 0; i < n; i++)
    {
        std::cout << it[i].id << " ";
    }
    std::cout << "\n";

    for (i = 0; i < n; i++)
    {
        if (it[i].s <= cap)
        {
            cap -= it[i].s;
            profit += it[i].p;
            take[it[i].id] = 1;
            std::cout << "  item " << it[i].id << " (p=" << it[i].p << ", s=" << it[i].s << "): "
                      << it[i].s << " <= " << cap + it[i].s << " -> TAKE, capacity left = " << cap << "\n";
        }
        else
        {
            std::cout << "  item " << it[i].id << " (p=" << it[i].p << ", s=" << it[i].s << "): "
                      << it[i].s << " > " << cap << " -> SKIP\n";
        }
    }
    std::cout << "Result: S = {";
    int first = 1;
    for (i = 1; i <= n; i++)
    {
        if (take[i])
        {
            if (!first)
                std::cout << ", ";
            std::cout << i;
            first = 0;
        }
    }
    std::cout << "}, size = " << B - cap << ", profit = " << profit << "\n\n";
    return profit;
}

static double greedyFractional()
{
    Item it[MAXN];
    int i, cap = B;
    double profit = 0.0;
    sortedItems(it, byRatio);
    std::cout << "Fractional greedy by p/s (pieces of an item allowed)\n";
    for (i = 0; i < n; i++)
    {
        if (it[i].s <= cap)
        {
            cap -= it[i].s;
            profit += it[i].p;
        }
        else
        {
            double fraction = (double)cap / it[i].s;
            profit += it[i].p * fraction;
            cap = 0;
            break;
        }
    }
    std::cout << "Profit = " << profit << " (upper bound for the 0/1 problem)\n\n";
    return profit;
}

static int knapsackDP()
{
    int i, x;
    for (x = 0; x <= B; x++)
        A[0][x] = 0;
    for (i = 1; i <= n; i++)
    {
        for (x = 0; x <= B; x++)
        {
            if (s[i] > x)
            {
                A[i][x] = A[i - 1][x];
            }
            else
            {
                int skipV = A[i - 1][x];
                int takeV = A[i - 1][x - s[i]] + p[i];
                A[i][x] = (skipV >= takeV) ? skipV : takeV;
            }
        }
    }
    return A[n][B];
}

static void printTable()
{
    int i, x;
    std::cout << "DP table A[0.." << n << ", 0.." << B << "]\n";
    std::cout << "i\\x\t";
    for (x = 0; x <= B; x++)
        std::cout << x << "\t";
    std::cout << "\n";
    for (i = 0; i <= n; i++)
    {
        std::cout << i << "\t";
        for (x = 0; x <= B; x++)
        {
            std::cout << A[i][x] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

static void traceBack(int take[])
{
    int i, x = B;
    for (i = 0; i <= n; i++)
        take[i] = 0;
    std::cout << "Trace back from A[" << n << "][" << B << "]\n";
    std::cout << "i\tx\tA[i][x]\tA[i-1][x]\tdecision\n";
    for (i = n; i >= 1; i--)
    {
        int prev = (i > 0) ? A[i - 1][x] : 0;
        if (A[i][x] != prev)
        {
            take[i] = 1;
            std::cout << i << "\t" << x << "\t" << A[i][x] << "\t" << prev << "\t\ttake item " << i << ", x = " << x << " - " << s[i] << " = " << x - s[i] << "\n";
            x -= s[i];
        }
        else
        {
            std::cout << i << "\t" << x << "\t" << A[i][x] << "\t" << prev << "\t\tskip item " << i << "\n";
        }
    }
    int total_size = 0, total_profit = 0;
    for (i = 1; i <= n; i++)
    {
        if (take[i])
        {
            total_size += s[i];
            total_profit += p[i];
        }
    }
    std::cout << "Result: S = {";
    int first = 1;
    for (i = 1; i <= n; i++)
    {
        if (take[i])
        {
            if (!first)
                std::cout << ", ";
            std::cout << i;
            first = 0;
        }
    }
    std::cout << "}, size = " << total_size << ", profit = " << total_profit << "\n\n";
}

static int bruteForce()
{
    int max_p = 0;
    int total_subsets = 1 << n;
    int mask;
    for (mask = 0; mask < total_subsets; mask++)
    {
        int current_weight = 0;
        int current_profit = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                current_weight += s[i + 1];
                current_profit += p[i + 1];
            }
        }
        if (current_weight <= B && current_profit > max_p)
        {
            max_p = current_profit;
        }
    }
    return max_p;
}

int main()
{
    std::string student_name;
    std::string student_id;
    int take_profit[MAXN + 1];
    int take_size[MAXN + 1];
    int take_ratio[MAXN + 1];
    int take_dp[MAXN + 1];

    /* Dynamic User Input for Name and SAP ID */
    std::cout << "Enter your Name: ";
    std::getline(std::cin, student_name);

    std::cout << "Enter your SAP ID / Roll No.: ";
    std::getline(std::cin, student_id);

    std::cout << "\n0/1 KNAPSACK GREEDY vs DYNAMIC PROGRAMMING (same dataset)\n";
    std::cout << "Name: " << student_name << "\n";
    std::cout << "ID: " << student_id << "\n\n";

    greedy01(byProfit, "maximum profit p[i]", take_profit);
    greedy01(bySize, "minimum size s[i]", take_size);
    greedy01(byRatio, "maximum ratio p[i]/s[i]", take_ratio);
    greedyFractional();

    int dp_opt = knapsackDP();
    printTable();
    traceBack(take_dp);

    int bf_opt = bruteForce();
    std::cout << "Verification: brute force over 2^" << n << " = " << (1 << n) << " subsets gives " << bf_opt << " -> "
              << ((dp_opt == bf_opt) ? "MATCH" : "MISMATCH") << "\n\n";

    std::cout << "PART 3: COMPARISON ON THE SAME DATASET (n = " << n << ", B = " << B << ")\n";
    std::cout << "Method                    | Items      | Size  | Profit | Optimal?\n";
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "Greedy: max profit        | {3, 4}     | 5     | 8      | Yes\n";
    std::cout << "Greedy: min size          | {2,3}      | 5     | 6      | NO\n";
    std::cout << "Greedy: max p/s           | {3, 4}     | 5     | 8      | Yes\n";
    std::cout << "Dynamic programming       | {3, 4}     | 5     | 8      | Yes\n";
    std::cout << "Fractional greedy p/s     | --         | 6     | 8.75   | upper bound\n";
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "Time: greedy O(n log n) | DP Theta(nB): (n+1)(B+1) = 35 cells | traceback Theta(n)\n";
    std::cout << "DP is always optimal; greedy is optimal only on some inputs.\n";

    return 0;
}