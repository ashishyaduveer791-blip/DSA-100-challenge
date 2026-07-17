class Rotationarray:
    def __init__(self):
        self.n = int(input("Enter the size of array: "))
        self.arr = list(map(int, input("Enter array elements: ").split()))
        self.k = int(input("Enter k: "))

    def rotation(self):
        for _ in range(self.k):
            # Store last element
            last = self.arr[self.n - 1]

            # Shift elements to the right
            for i in range(self.n - 1, 0, -1):
                self.arr[i] = self.arr[i - 1]

            # Put last element at first position
            self.arr[0] = last

    def display(self):
        print("Rotated Array:")
        for num in self.arr:
            print(num, end=" ")


obj = Rotationarray()
obj.rotation()
obj.display()