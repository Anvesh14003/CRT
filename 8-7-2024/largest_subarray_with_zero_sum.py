def subarray(arr):
    hash_map = {}
    max_len = 0
    current_sum = 0
    start_index = -1

    for i in range(len(arr)):
        current_sum += arr[i]
        
        if current_sum == 0:
            max_len = i+1
            start_index = 0

        if current_sum in hash_map:
            if max_len < i - hash_map[current_sum]:
                max_len = i - hash_map[current_sum]
                start_index = hash_map[current_sum] + 1
        else:
            hash_map[current_sum] = i

    if start_index == -1:
        return []
    else:
        return arr[start_index:start_index + max_len]


arr = [4,2,-3,1,6]

print(subarray(arr))