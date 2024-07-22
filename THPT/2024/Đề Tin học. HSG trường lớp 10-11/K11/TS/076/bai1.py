n=input()
a=n.split()
for i in range(len(a)):
    a[i]=int(a[i])
p=max(a)
a.remove(p)
q=max(a)
print(p*q)
