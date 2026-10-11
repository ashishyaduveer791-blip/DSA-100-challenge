// // // #include <stdio.h>

// // // int main()
// // // {
// // //     int S[] = {1, 4, 12, 15, 7};
// // //     int F[] = {13, 6, 14, 19, 13};

// // //     int n = 5;
// // //     int i, j, temp;

// // //     // Sort activities according to finish time
// // //     for (i = 0; i < n - 1; i++)
// // //     {
// // //         for (j = i + 1; j < n; j++)
// // //         {
// // //             if (F[i] > F[j])
// // //             {
// // //                 // Swap finish time
// // //                 temp = F[i];
// // //                 F[i] = F[j];
// // //                 F[j] = temp;

// // //                 // Swap corresponding start time
// // //                 temp = S[i];
// // //                 S[i] = S[j];
// // //                 S[j] = temp;
// // //             }
// // //         }
// // //     }

// // //     printf("Selected Activities:\n");

// // //     // Select first activity
// // //     printf("(%d, %d)\n", S[0], F[0]);

// // //     int lastFinish = F[0];
// // //     int count = 1;

// // //     // Select remaining non-overlapping activities
// // //     for (i = 1; i < n; i++)
// // //     {
// // //         if (S[i] >= lastFinish)
// // //         {
// // //             printf("(%d, %d)\n", S[i], F[i]);

// // //             lastFinish = F[i];
// // //             count++;
// // //         }
// // //     }

// // //     printf("Maximum number of activities = %d\n", count);

// // //     return 0;
// // // // }

// // #include <stdio.h>

// // #define V 9
// // #define INF 99999

// // int minDistance(int dist[], int visited[])
// // {
// //     int min = INF, minIndex = -1;

// //     for (int i = 0; i < V; i++)
// //     {
// //         if (!visited[i] && dist[i] < min)
// //         {
// //             min = dist[i];
// //             minIndex = i;
// //         }
// //     }

// //     return minIndex;
// // }

// // void dijkstra(int graph[V][V], int source)
// // {
// //     int dist[V];
// //     int visited[V];

// //     for (int i = 0; i < V; i++)
// //     {
// //         dist[i] = INF;
// //         visited[i] = 0;
// //     }

// //     dist[source] = 0;

// //     for (int count = 0; count < V; count++)
// //     {
// //         int u = minDistance(dist, visited);

// //         if (u == -1)
// //             break;

// //         visited[u] = 1;

// //         for (int v = 0; v < V; v++)
// //         {
// //             if (!visited[v] &&
// //                 graph[u][v] != 0 &&
// //                 dist[u] != INF &&
// //                 dist[u] + graph[u][v] < dist[v])
// //             {
// //                 dist[v] = dist[u] + graph[u][v];
// //             }
// //         }
// //     }

// //     printf("Vertex\tShortest Distance from A\n");

// //     for (int i = 0; i < V; i++)
// //     {
// //         printf("%c\t%d\n", 'A' + i, dist[i]);
// //     }
// // }

// // int main()
// // {
// //     int graph[V][V] = {0};

// //     /* Undirected graph */

// //     graph[0][1] = graph[1][0] = 4;  // A-B
// //     graph[1][2] = graph[2][1] = 11; // B-C
// //     graph[1][3] = graph[3][1] = 8;  // B-D
// //     graph[0][2] = graph[2][0] = 8;  // A-C
// //     graph[2][4] = graph[4][2] = 7;  // C-E
// //     graph[2][5] = graph[5][2] = 1;  // C-F
// //     graph[5][4] = graph[4][5] = 6;  // F-E
// //     graph[5][7] = graph[7][5] = 2;  // F-H
// //     graph[3][4] = graph[4][3] = 2;  // D-E
// //     graph[3][6] = graph[6][3] = 7;  // D-G
// //     graph[3][7] = graph[7][3] = 4;  // D-H
// //     graph[6][7] = graph[7][6] = 14; // G-H
// //     graph[7][8] = graph[8][7] = 10; // H-I
// //     graph[6][8] = graph[8][6] = 9;  // G-I

// //     dijkstra(graph, 0);

// //     return 0;
// // }

// #include <stdio.h>
// #include <limits.h>

// #define V 9
// #define INF INT_MAX

// enum
// {
//     S,
//     A,
//     B,
//     C,
//     D,
//     E,
//     F,
//     G,
//     H
// };

// const char *name[V] =
//     {
//         "S", "A", "B", "C", "D", "E", "F", "G", "H"};

// int graph[V][V];

// void buildGraph()
// {
//     int i, j;

//     for (i = 0; i < V; i++)
//     {
//         for (j = 0; j < V; j++)
//         {
//             graph[i][j] = INF;
//         }
//     }

//     graph[S][A] = 2;
//     graph[S][D] = 20;

//     graph[A][E] = 3;

//     graph[E][B] = 1;
//     graph[E][H] = 4;
//     graph[E][G] = 6;

//     graph[B][C] = 7;

//     graph[C][F] = 5;

//     graph[F][B] = 0;

//     graph[G][D] = 2;

//     graph[H][E] = 2;
//     graph[H][G] = 1;
// }

// int minDistance(int dist[], int visited[])
// {
//     int min = INF;
//     int minIndex = -1;

//     for (int i = 0; i < V; i++)
//     {
//         if (!visited[i] && dist[i] < min)
//         {
//             min = dist[i];
//             minIndex = i;
//         }
//     }

//     return minIndex;
// }

// void dijkstra(int source)
// {
//     int dist[V];
//     int visited[V];

//     for (int i = 0; i < V; i++)
//     {
//         dist[i] = INF;
//         visited[i] = 0;
//     }

//     dist[source] = 0;

//     for (int count = 0; count < V; count++)
//     {
//         int u = minDistance(dist, visited);

//         if (u == -1)
//             break;

//         visited[u] = 1;

//         for (int v = 0; v < V; v++)
//         {
//             if (!visited[v] &&
//                 graph[u][v] != INF &&
//                 dist[u] != INF &&
//                 dist[u] + graph[u][v] < dist[v])
//             {
//                 dist[v] = dist[u] + graph[u][v];
//             }
//         }
//     }

//     printf("Vertex\tShortest Distance from S\n");

//     for (int i = 0; i < V; i++)
//     {
//         if (dist[i] == INF)
//             printf("%s\tINF\n", name[i]);
//         else
//             printf("%s\t%d\n", name[i], dist[i]);
//     }
// }

// int main()
// {
//     buildGraph();

//     dijkstra(S);

//     return 0;
// }

#include <stdio.h>
#include <limits.h>

#define V 9
#define INF INT_MAX

enum
{
    S,
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H
};

const char *name[V] =
    {
        "S", "A", "B", "C", "D", "E", "F", "G", "H"};

int graph[V][V];

void buildGraph()
{
    int i, j;

    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            graph[i][j] = INF;
        }
    }

    graph[S][A] = 2;
    graph[S][D] = 20;

    graph[A][E] = 3;

    graph[E][B] = 1;
    graph[E][H] = 4;
    graph[E][G] = 6;

    graph[B][C] = 7;

    graph[C][F] = 5;

    graph[F][B] = 0;

    graph[G][D] = 2;

    graph[H][E] = 2;
    graph[H][G] = 1;
}

int minDistance(int dist[], int visited[])
{
    int min = INF;
    int minIndex = -1;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dist[i] < min)
        {
            min = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

void dijkstra(int source)
{
    int dist[V];
    int visited[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[source] = 0;

    for (int count = 0; count < V; count++)
    {
        int u = minDistance(dist, visited);

        if (u == -1)
            break;

        visited[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] &&
                graph[u][v] != INF &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\tShortest Distance from S\n");

    for (int i = 0; i < V; i++)
    {
        if (dist[i] == INF)
            printf("%s\tINF\n", name[i]);
        else
            printf("%s\t%d\n", name[i], dist[i]);
    }
}

int main()
{
    buildGraph();

    dijkstra(S);

    return 0;
}