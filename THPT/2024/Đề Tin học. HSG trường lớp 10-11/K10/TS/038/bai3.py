a=int(input())
def prime(n):
    k=1
    c=0
    for k in range(n-1):
        k=k+1
        if n%k==0:
            c=c+1
    if c==1:
        return True
    else:
        return False
b=0
S=a
for b in range(a):
    S=S+1
    b=b+1
    while prime(S)==True:
        print(b)
        break
        
       
       

        
                    

        
        

