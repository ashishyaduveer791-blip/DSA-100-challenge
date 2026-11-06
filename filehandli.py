# file =open("demo.txt","w")
# file.write("welcome to ws:")
# file.writelines("Welcome to ashish")
# file.close()

file=open("demo.txt","r")
name = file.readlines()
count =len(name)
print(count)
vowel=0
for name in name:
    if name[0].lower in"aeiou":
        vowel +=1
        print(vowel)
        # longest =" "
        for name in names:
            name=name.sprlit(())
            lonhest =name