a=int(input())
b=int(input())
c=int(input())
if a*b>a*c and a*b>b*c:
    print(a*b)
if a*c>a*b and a*c>b*c:
    print(a*c)
if b*c>a*c and b*c>a*b:
    print(b*c)
    
