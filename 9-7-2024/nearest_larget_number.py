from itertools import permutations
a = 459
b = 500

a_str = str(a)
perm = permutations(a_str)

perm_list = sorted(set([''.join(p) for p in perm]))

valid_numbers = [int(num) for num in perm_list if int(num) > b]

smallest_valid_number = min(valid_numbers) if valid_numbers else -1

print(smallest_valid_number)
