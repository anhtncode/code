def snt(n):
    if n<2:
        return False
    for i in range(2,n):
        if n%i==0:
            return False
    return True
b=int(input("a="))
a=b+1
if snt(a):
    print("1")
else:
    print("2")

