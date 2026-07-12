class IdentityMatrix:
    def __init__(self, n):
        self.n = n
        self.matrix = []

    def input_matrix(self):
        print("Enter the matrix elements:")
        for i in range(self.n):
            row = list(map(int, input().split()))
            self.matrix.append(row)

    def check_identity(self):
        for i in range(self.n):
            for j in range(self.n):
                if i == j:
                    if self.matrix[i][j] != 1:
                        return False
                else:
                    if self.matrix[i][j] != 0:
                        return False
        return True


# Main Program
n = int(input("Enter the size of the matrix: "))

obj = IdentityMatrix(n)
obj.input_matrix()

if obj.check_identity():
    print("Identity Matrix")
else:
    print("Not an Identity Matrix")