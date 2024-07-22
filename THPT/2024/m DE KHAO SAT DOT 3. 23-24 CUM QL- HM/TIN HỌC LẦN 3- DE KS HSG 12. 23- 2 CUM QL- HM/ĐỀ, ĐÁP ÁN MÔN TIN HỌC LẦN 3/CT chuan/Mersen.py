from math import *
f=open("MERSEN.INP","r")
g=open("MERSEN.OUT","w")
def eratosthene(N):
    A=[True]*N
    A[0]=False
    A[1]=False
    for i in range(2,round(sqrt(N))):
        if A[i]:
            for j in range(i*i,N,i):
                A[j]=False
    X=[]
    for i in range(N):
        if A[i]:
            X.append(i)
    return X


N=int(f.readline())
SNT=eratosthene(N)
for i in range(len(SNT)):
    k=int(pow(2,SNT[i])-1)
    if k>N:
        break
    else:
        if k in SNT:
            g.write(str(k)+" ")
f.close()
g.close()
