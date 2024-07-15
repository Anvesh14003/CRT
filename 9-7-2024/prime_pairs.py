n = int(input("Enter the lower bound of the range (n): "))
m = int(input("Enter the upper bound of the range (m): "))

max_limit = 2000
is_prime = [True] * (max_limit + 1)
p = 2
while (p * p <= max_limit):
    if is_prime[p]:
        for i in range(p * p, max_limit + 1, p):
            is_prime[i] = False
    p += 1

primes = [p for p in range(2, max_limit + 1) if is_prime[p]]
filtered_primes = [p for p in primes if n <= p <= m]

prime_pairs_dict = dict(((p, p + 6) for p in filtered_primes if p + 6 in filtered_primes))

if prime_pairs_dict:
    print("Prime Pairs:")
    for key, value in prime_pairs_dict.items():
        print((key, value))
    print(f"Number of Prime Pairs: {len(prime_pairs_dict)}")
else:
    print("No Prime Pairs")