# def reverse_string(s):
#     reversed_s = ""
#     for char in s:
#         reversed_s = char + reversed_s
#     return reversed_s

# def main():
#     s = input("Enter the string: ")
#     reversed_s = reverse_string(s)
#     print(f"Reversed String: {reversed_s}")

# if __name__ == "__main__":
#     main()


s= "Anvesh"
rev = ""
for x in s:
    rev=x +rev
print(rev)