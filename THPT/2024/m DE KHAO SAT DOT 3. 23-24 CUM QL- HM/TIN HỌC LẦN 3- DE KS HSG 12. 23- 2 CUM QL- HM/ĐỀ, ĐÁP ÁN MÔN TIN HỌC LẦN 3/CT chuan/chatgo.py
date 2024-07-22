f=open("CHATGO.INP","r")
g=open("CHATGO.OUT","w")

N, M=map(int,f.readline().split())
A=list(map(int,f.readline().split()))
# check: N: số cây, M: số gỗ tối thiểu, z: độ cao lớn nhất để lấy được số gỗ tối thiểu M
def check(z):
    sum=0
    for i in range(N):
        if A[i]>z:
            sum=sum+(A[i]-z)
    if sum>=M:
        return True
    else:
        return False
#A.sort()
kq=-1
l=0
r=max(A)  # r là giá trị lớn nhất của hàng cây
while l<=r:
    h=(l+r)//2
    if check(h):
        kq=h
        l=h+1
    else:
        r=h-1
print(kq,file=g)
f.close()
g.close()