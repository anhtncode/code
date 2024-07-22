a=int(input())
b=a
while b>=a:
    m=2
    while m<b:
        if b%m==0:
            break
        m+=1
    b+=1
    if b==m+1:
        break
print(b-a-1)
    
    
    
