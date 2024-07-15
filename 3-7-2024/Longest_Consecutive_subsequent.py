def findLongestConseqSubseq(arr, N):

    s = set(arr)
    longest_streak = 0

    for num in arr:
      
        if num - 1 not in s:
            current_num = num
            current_streak = 1

            while current_num + 1 in s:
                current_num += 1
                current_streak += 1

            longest_streak = max(longest_streak, current_streak)

    return longest_streak

N1 = 7
arr1 = [2, 6, 1, 9, 4, 5, 3]
print(findLongestConseqSubseq(arr1, N1)) 

N2 = 7
arr2 = [1, 9, 3, 10, 4, 20, 2]
print(findLongestConseqSubseq(arr2, N2)) 
