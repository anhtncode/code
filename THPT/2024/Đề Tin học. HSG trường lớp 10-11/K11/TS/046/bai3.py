N=int(input())
a=input()
b=a.split()

for i in range(N):
    A[i]=(b[i]+1)
    
for i in range(len(d)-1):
    h=d[i]
    k=d[i+1]
    while h!=k:
        if h>k:
            h=h-k

        if h<k:
            h=k-h
        A.append(h)
print(max(A))
