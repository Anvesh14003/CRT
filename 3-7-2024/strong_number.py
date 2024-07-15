import math

def is_strong_number(number):
    
    digits = str(number)
    
    sum_of_factorials = sum(math.factorial(int(digit)) for digit in digits)
    
    
    return sum_of_factorials == number

number = 145
if is_strong_number(number):
    print(f"{number} is a strong number.")
else:
    print(f"{number} is not a strong number.")
    
number = 123
if is_strong_number(number):
    print(f"{number} is a strong number.")
else:
    print(f"{number} is not a strong number.")
