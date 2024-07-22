n=input()
a=n.split()
for i in range(len(a)):
    a[i]=int(a[i])
j=max(a)
a.remove(j)
q=max(a)
print(j*q)


    
