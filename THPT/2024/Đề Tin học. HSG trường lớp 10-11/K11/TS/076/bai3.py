N=str(input())
a=input()
b=a.split()
for i in range (len(N)):
      b[i]=a[i+1]
      A=[]
for i in range(len(b)-1):
      m=b[i]
      n=b[i+1]
      while m!=n:
            if m>n:
                  m=m-n
            if m<n:
                  m=n-m
            A.append(m)
print(max(A))
