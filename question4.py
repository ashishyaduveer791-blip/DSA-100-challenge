class LinearSearch:
    def __init__(self, arr):
        self.arr = arr

    def search(self, key):
        comparisons = 0

        for i in range(len(self.arr)):
            comparisons += 1

            if self.arr[i] == key:
                print("Element found at index:", i)
                print("Number of comparisons:", comparisons)
                return

        print("Element not found")
        print("Number of comparisons:", comparisons)


# User Input
n = int(input("Enter number of elements: "))

arr = []
for i in range(n):
    arr.append(int(input("Enter element: ")))

key = int(input("Enter element to search: "))

obj = LinearSearch(arr)
obj.search(key)