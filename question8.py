# class Mirror:
#     def reverse_string(self, text):
#         return text[::-1]


# text = input("enter the sentances:")

# obj = Mirror()
# print(obj.reverse_string(text))

class String:
    def ulta_sentances(self, text):
        return text[-1::-2]

text = input("Enter a sentence: ")

obj = String()
print(obj.ulta_sentances(text))