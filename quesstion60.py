#Remove Duplicates from Sorted Array

class Solution:
    def removeDuplicates(self):
        nums = list(map(int, input("Enter sorted numbers: ").split()))

        unique = []

        for i in range(len(nums)):
            if i == 0:
                unique.append(nums[i])
            elif nums[i] != nums[i - 1]:
                unique.append(nums[i])

        print("Array after removing duplicates:", unique)


obj = Solution()
obj.removeDuplicates()