number = input("Enter the mobile number: ")

if len(number) == 10 and number[0] in '9876' and number.isdigit():
    print("Valid number")
else:
    print("Invalid number")
