s = input()
b = s.split()
a = []
for i in range(len(b)):
    a.append(int(b[i]))
a.sort()
tich = a[2] * a[1]
print(tich)
