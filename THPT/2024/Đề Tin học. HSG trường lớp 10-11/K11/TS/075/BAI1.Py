n=input()
m=n.split()
for i in range(len(m)):
    m[i]=int(m[i])
p=max(m)
m.remove(p)
q=max(m)
print(p*q)
