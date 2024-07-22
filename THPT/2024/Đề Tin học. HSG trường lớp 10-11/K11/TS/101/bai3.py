n = int (input())
s = input()
b = s.split()
a = []
uoc = []
t = 0
for i in range(len(b)):
    a.append(int(b[i]))
for i in range(n-1):
    for j in range(1, a[i+1]):
        if (a[i] % j == 0) and (a[i+1] % j == 0):
            t = j
    uoc.append(t)
print(max(uoc))
