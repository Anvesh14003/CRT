input_string = input("Enter the string: ")

res= ""
i= 0
length= len(input_string)

while i < length:
    count = 1
    while i + 1 < length and input_string[i] == input_string[i + 1]:
        i += 1
        count += 1
    res+= input_string[i]
    if count > 1:
        res+= str(count)
    i += 1

print(res)