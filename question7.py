class Power:
    def power(self, base, exp):
        if exp == 0:
            return 1
        return base * self.power(base, exp - 1)


base = int(input("Enter base: "))
exp = int(input("Enter exponent: "))

obj = Power()
result = obj.power(base, exp)

print("Power =", result)