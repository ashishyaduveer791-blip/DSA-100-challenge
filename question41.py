# to count the vowel
b =input("Enter a sentance:")
count = 0
for ch in b:
    if ch in "aeiouAEIOU":
        count +=1
        print("Number of vowel in the sentence:",count)
# #     
    x =input("Enter a sentence")
    count =sum(1 for ch in x if ch.lower() in "aeiou")
    print("Number of vowel:",count)

    # Another method  most advance collection
from collections import Counter
a =input("Enter a sentance:").lower() .upper()
vowel_count=Counter(ch for  ch in  a if ch in"aeiouAEIOU")
print(vowel_count)
