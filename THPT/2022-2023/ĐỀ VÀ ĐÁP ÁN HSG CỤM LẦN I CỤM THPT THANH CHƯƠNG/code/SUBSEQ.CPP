#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int t,n,nt; int a[20000],f[20000],tr[20000],kq[20000];
void nhap(){
cin>>n;
for(int i=1;i<=n; i++) {cin>>a[i];f[i]=0;tr[i]=0;}
}
void xuly(){
for(int i=1; i<=n; i++)
for(int j=i-1; j>=1; j--)
if(a[i]%a[j]==0)
{
if(f[i]<f[j]+1) {
f[i]=f[j]+1;
tr[i]=j;
}
}
int m=0,vt=0;
for(int i=1; i<=n; i++)
if(m<f[i]) {m=f[i]; vt=i;}
int i=vt,j=1; kq[j]=a[i];
while(i>0){
i=tr[i];
j++;
kq[j]=a[i];
}
if(j>1)
cout<<--j;
else cout<<j;
}
int main()
{
freopen("subseq.inp","r",stdin);
freopen("subseq.out","w",stdout);
nhap();
xuly();
return 0;
}
