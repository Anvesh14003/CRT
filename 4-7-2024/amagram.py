input1= input("Enter the first string: ")
input2= input("Enter the second string: ")

str1= input1.replace(" ", "").lower()
str2= input2.replace(" ", "").lower()

if sorted(str1) == sorted(str2):
    print('yes')
else:
    print('no')
