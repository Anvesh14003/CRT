def rearrange(arr):
    pos = [num for num in arr if num >= 0]
    neg = [num for num in arr if num < 0]

    res = []
    i,j = 0, 0
    n_pos = len(pos)
    n_neg = len(neg)
    while i < n_pos and j < n_neg:
        res.append(pos[j])
        res.append(neg[i])
        i = i + 1
        j = j + 1

    while i < n_pos:
        res.append(pos[i])
        i = i+1
    while j < n_neg:
        res.append(neg[j])
        j = j+1

    return res
    
arr = [-1,2,-3,4,5,-6]
print(rearrange(arr))