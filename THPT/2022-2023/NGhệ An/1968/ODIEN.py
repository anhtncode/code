with open('Odien.Inp',encoding='utf')as f1:
    s=f1.readline().split()
    s1=f1.read().split()
    n=int(s[0])
    m=int(s[1])
r=[]
d=0
for i in range(1,int(n)+1):
    r.append(i)
r=r*int(n)
print(r)
for j in range(len(s1)):
    if int(s1[j]) in r and s1.count(s1[j])<=3:
        d+=1
print(d)
with open('Odien.Out','w',encoding='utf')as f2:
    f2.write(str(d))
