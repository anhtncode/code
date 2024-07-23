with open('KhongHoanHao.Inp',encoding='utf')as f1:
    s=f1.read().split()
    a=int(s[0])
    b=int(s[1])
d=0
def skhh(y):
    x=int(y)
    t=[]
    so=0
    so1=0
    for i in range(x-1,0,-1):
        if x%i==0:
            t.append(i)
    a=sum(t)
    if a>x and a!=x:
        return True
    if a<x:
        return False
for j in range(a,b+1):
    if skhh(j)==True:
        d+=1
with open('KhongHoanHao.Out','w',encoding='utf')as f2:
    f2.write(str(d))
