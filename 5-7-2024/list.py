num = [3, 6, 5]
res = []

for i in range(len(num)):
    for j in range(i+1, len(num)):
        if (num[j] > num[i]):
            sum_result = num[j] - num[i]
        else:
            sum_result = num[i] - num[j]
        res.append(sum_result)

print(res)
