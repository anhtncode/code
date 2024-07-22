def gcd(a,b):
    while b!=0:
        a,b = b,a % b
    return a
def somax(day_N):
    so_max = day_N[0]
    for i in day_N:
        if i > so_max:
            so_max = i
    return so_max
N = int(input("N = "))
day_N = list(map(int, input().split()))
for i in day_N:
    so_max = somax(day_N)
t = somax(day_N)
b = day_N[i-1]


ucln = day_N[0]
for n in day_N[1:]:
    ucln = gcd(ucln,n)
so_max = t - b

print(so_max)

    


