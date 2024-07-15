# Inputs
r = 7
unit = 2
arr = [2, 8, 3, 5, 7, 4, 1, 2]

# Check if the array is null or empty
if arr is None or len(arr) == 0:
    result = -1
else:
    # Calculate the total amount of food required for all rats
    total_food_required = r * unit
    
    # Variable to keep track of the total food accumulated from houses
    accumulated_food = 0
    result = 0
    
    # Iterate through the array to find the minimum number of houses needed
    for i in range(len(arr)):
        accumulated_food += arr[i]
        if accumulated_food >= total_food_required:
            result = i + 1
            break
    
   
    if accumulated_food < total_food_required:
        result = 0

print(result)  
