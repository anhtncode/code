h=int(input())
n=h
while n>=h:          
    m=2
    while m<n:
        if n%m==0:
            break
        m=m+1
    n=n+1
    if n==m+1:
        break
print(n-h-1)
        
    
