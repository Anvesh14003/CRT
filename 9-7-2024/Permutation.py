from itertools import permutations

number = 459
b = 500

number_str = str(number)
perm = permutations(number_str)

perm_list = [''.join(p) for p in perm]

valid_numbers = [int(num) for num in perm_list if int(num) > b]

smallest_valid_number = min(valid_numbers) if valid_numbers else None

print(f"Permutations of {number}: {perm_list}")
print(f"Valid numbers greater than {b}: {valid_numbers}")
print(f"Smallest valid number: {smallest_valid_number}")
