def sum_of_divisors(x):
    sx = 0
    for i in range(2, x // 2 + 1):
        if x % i == 0:
            sx += i
    return sx

def kt_ae(m, n):
    sx = sum_of_divisors(m)
    sy = sum_of_divisors(n)
    return sx == sy and sx > 0

def main():
    with open('ANHEM.INP', 'r') as f1, open('ANHEM.OUT', 'w') as f2:
        m, n = map(int, f1.readline().split())
        if kt_ae(m, n):
            f2.write('YES\n')
        else:
            f2.write('NO\n')

if __name__ == "__main__":
    main()
