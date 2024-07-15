def is_palindrome(number):

    str_number = str(number)
    
    
    reversed_number = str_number[::-1]
    return str_number == reversed_number


number = 1234321
if is_palindrome(number):
    print(f"{number} is a palindrome.")
else:
    print(f"{number} is not a palindrome.")
    
number = 12345
if is_palindrome(number):
    print(f"{number} is a palindrome.")
else:
    print(f"{number} is not a palindrome.")
