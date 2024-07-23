with open('Daysodep.Inp',encoding='utf')as f1:
    s=f1.readline().split()
    s1=f1.read().split()
    n=int(s[0])
    k=int(s[1])
xau=' '.join(s1)
d=0
def tim(c):
    l=c.split()
    x=list(l)
    c=[]
    l=[]
    for i in range(len(x)):
        if i%2!=0:
            l.append(int(x[i]))
        else:
             c.append(int(x[i]))
    sc=sum(c)
    sl=sum(l)
    if sc-sl<=k and sc-sl>=0:
        return True
    else:
        return False
i=0
r=[]
r2=[]
for i in range(len(s1)):
    r.append(int(s1[i]))
r1=r[::-1]
xau1=""
for j in range(len(r1)):
    r2.append(str(r1[j]))
    xau=" ".join(r2)
    if tim(xau)==True:
        d+=1
t=d-1
with open('Daysodep.Out','w',encoding='utf')as f2:
    if d>0:
        f2.write(str(t))
    else:
        f2.write("Dãy số không có dãy đẹp")
