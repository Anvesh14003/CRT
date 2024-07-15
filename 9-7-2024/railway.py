def time_to_minutes(time_str):
    hours, minutes = map(int, time_str.split(':'))
    return hours * 60 + minutes

def find_minimum_platforms(arr, dep):
    arr = [time_to_minutes(time) for time in arr]
    dep = [time_to_minutes(time) for time in dep]
    
    n = len(arr)
    arr.sort()
    dep.sort()
    
    platform_needed = 1
    result = 1
    i = 1
    j = 0
    
    while (i < n and j < n):
        if arr[i] <= dep[j]:
            platform_needed += 1
            i += 1
        elif arr[i] > dep[j]:
            platform_needed -= 1
            j += 1
        if platform_needed > result:
            result = platform_needed
    
    return result

N = 6
arr = ['9:00', '9:45', '9:55', '11:00', '15:00', '18:00']
dep = ['9:20', '12:00', '11:30', '11:50', '19:00', '20:00']

print(find_minimum_platforms(arr, dep))
