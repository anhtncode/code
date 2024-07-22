N=int(input())
a=input()
b=a.split()
for i in range(N):
    b[i]=int(b[i])
A=[]
for i in range(len(b)-1):
    m=b[i]
    n=b[i+1]
    while m!=n:
        if m>n:
            m=m-n
        if m<n:
            n=n-m
    A.append(m)
print(max(A))
