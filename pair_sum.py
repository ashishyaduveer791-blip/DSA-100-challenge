class Solution:
    def closest_to_zero(self, arr):
        n = len(arr)

        min_sum = float('inf')
        first = second = 0

        for i in range(n - 1):
            for j in range(i + 1, n):
                current_sum = arr[i] + arr[j]

                if abs(current_sum) < abs(min_sum):
                    min_sum = current_sum
                    first = arr[i]
                    second = arr[j]

        return first, second


# Driver Code
n = int(input())
arr = list(map(int, input().split()))

obj = Solution()
a, b = obj.closest_to_zero(arr)

print(a, b)