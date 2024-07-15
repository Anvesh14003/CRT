input_dict = {}

while True:
    key = input("Enter key (or 'done' to finish): ")
    if key.lower() == 'done':
        break
    try:
        value = float(input(f"Enter value for key '{key}': "))
        input_dict[key] = value
    except ValueError:
        print("Please enter a valid number for the value.")

total_sum = sum(input_dict.values())

print(f"The sum of the values is: {total_sum}")



'''
Output
Enter key (or 'done' to finish): Maths
Enter value for key 'Maths': 96
Enter key (or 'done' to finish): English
Enter value for key 'English': 87
Enter key (or 'done' to finish): Science
Enter value for key 'Science': 99
Enter key (or 'done' to finish): Social studies
Enter value for key 'Social studies': 92
Enter key (or 'done' to finish): done
The sum of the values is: 374.0

'''


