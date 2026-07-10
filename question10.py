class Matrix:
    def __init__(self, rows, cols):
        self.rows = rows
        self.cols = cols
        self.matrix = []

    def input_matrix(self):
        print("Enter the matrix elements:")
        for i in range(self.rows):
            row = list(map(int, input().split()))
            self.matrix.append(row)

    def is_symmetric(self):
        # A symmetric matrix must be square
        if self.rows != self.cols:
            return False

        for i in range(self.rows):
            for j in range(self.cols):
                if self.matrix[i][j] != self.matrix[j][i]:
                    return False
        return True

    def display(self):
        print("Matrix:")
        for row in self.matrix:
            print(*row)


# Main Program
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

m = Matrix(rows, cols)
m.input_matrix()

m.display()

if m.is_symmetric():
    print("The matrix is Symmetric.")
else:
    print("The matrix is Not Symmetric.")