import re

def find_largest_number_without_nine(strings):
    results = []
    
    for s in strings:
        numbers = re.findall(r'\b\d+\b', s)
        
        valid_numbers = [int(num) for num in numbers if '9' not in num]
        
        if valid_numbers:
            results.append(max(valid_numbers))
        else:
            results.append(-1)
    
    return results

T = int(input("Enter the number of test cases: "))
strings = [input("Enter string: ").strip() for _ in range(T)]

results = find_largest_number_without_nine(strings)

for result in results:
    print(result)
