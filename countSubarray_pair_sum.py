class ZeroSumSubarray:
    def __init__(self):
        self.n = int(input("Enter size of array: "))
        self.arr = list(map(int, input("Enter array elements: ").split()))

    def count_zero_sum_subarrays(self):
        count = 0

        for i in range(self.n):
            current_sum = 0

            for j in range(i, self.n):
                current_sum += self.arr[j]

                if current_sum == 0:
                    count += 1

        return count


obj = ZeroSumSubarray()
print("Number of zero-sum subarrays:", obj.count_zero_sum_subarrays())