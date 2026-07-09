# class Matrix:
#     def __init__(self, rows, cols):
#         self.rows = rows
#         self.cols = cols
#         self.matrix = []

#     def input_matrix(self):
#         print("Enter the matrix elements:")
#         for i in range(self.rows):
#             row = list(map(int, input().split()))
#             self.matrix.append(row)

#     def add(self, other):
#         result = Matrix(self.rows, self.cols)

#         for i in range(self.rows):
#             row = []
#             for j in range(self.cols):
#                 row.append(self.matrix[i][j] + other.matrix[i][j])
#             result.matrix.append(row)

#         return result

#     def display(self):
#         print("Result Matrix:")
#         for row in self.matrix:
#             print(*row)


# # Main Program
# rows = int(input("Enter number of rows: "))
# cols = int(input("Enter number of columns: "))

# print("Enter First Matrix:")
# m1 = Matrix(rows, cols)
# m1.input_matrix()

# print("Enter Second Matrix:")
# m2 = Matrix(rows, cols)
# m2.input_matrix()

# result = m1.add(m2)

# result.display()

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

    def add(self, other):
        result = Matrix(self.rows, self.cols)

        for i in range(self.rows):
            row = []
            for j in range(self.cols):
                row.append(self.matrix[i][j] + other.matrix[i][j])
            result.matrix.append(row)

        return result

    def display(self):
        print("Result Matrix:")
        for row in self.matrix:
            print(*row)


# Main Program
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

print("Enter First Matrix:")
m1 = Matrix(rows, cols)
m1.input_matrix()

print("Enter Second Matrix:")
m2 = Matrix(rows, cols)
m2.input_matrix()

result = m1.add(m2)

result.display()