def differenceofSum(n, m):
    sum_divisible_by_m = sum(i for i in range(1, n + 1) if i % m == 0)
    sum_not_divisible_by_m = sum(i for i in range(1, n + 1) if i % m != 0)
    return sum_not_divisible_by_m - sum_divisible_by_m

m = 6
n = 30
output = differenceofSum(n, m)
print(output)
