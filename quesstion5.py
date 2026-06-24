class ReverseArray:
    def __init__(self, reverse_array):
        self.reverse_array = reverse_array

    def array_reverse(self):
        n = len(self.reverse_array)

        for i in range(n // 2):
            self.reverse_array[i], self.reverse_array[n - 1 - i] = (
                self.reverse_array[n - 1 - i],
                self.reverse_array[i]
            )

    def display(self):
        print(self.reverse_array)


# Example
obj = ReverseArray([1, 2, 3, 4, 5])

print("Before Reverse:")
obj.display()

obj.array_reverse()

print("After Reverse:")
obj.display()