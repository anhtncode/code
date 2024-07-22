def is_prime(n):
    if n <= 1:
        return False
    for i in range(2,n):
        if n%i == 0:
            return False
    return True
n = int(input())
snt = is_prime(n)
so = 0
n = so + 1
print(n)
