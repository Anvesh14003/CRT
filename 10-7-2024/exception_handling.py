a=10
b = 0
try:
    print(a/b)
except ZeroDivisionError as msg:
    print(msg)
    print("Can Not divisible by zero")