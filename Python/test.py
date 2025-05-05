import math

def count_arrangements(n):
    factors = set()
    for i in range(1, int(math.isqrt(n)) + 1):
        if n % i == 0:
            factors.add(i)
            factors.add(n // i)
    factors = sorted(factors)
    
    count = 0
    for L in factors:
        for W in factors:
            if (n // L) % W != 0:
                continue
            H = n // (L * W)
            if H in factors:
                count += 1
    return count

n = 2021041820210418
print(count_arrangements(n))