#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005;
int a[maxn],t[maxn],n,p,kq,i,j,cmin,cmax;
int tknp(int l,int h)
{
int tg,dau,cuoi,giua;
 tg=h;
dau=1;
cuoi=h-1;
while (dau<=cuoi)
 {
giua=(dau+cuoi) / 2;
if (t[giua]<=a[h]-p)
{
tg=giua;
cuoi=giua-1;
 }
else dau=giua+1;
 }
return tg;
 }
int main ()
{
freopen("MAYMAN.inp","r",stdin);
 freopen("MAYMAN.out","w",stdout);
 cin>>n>>p;
for (i=1;i<= n; i++) cin>>a[i];
t[1]=a[1];
 for (i=2;i<=n;i++)
t[i]=min(t[i-1],a[i]);
 kq=0;
 for (i=2;i<=n;i++)
 {
j=tknp(1,i);
if (i-j>kq) {kq=i-j;
              cmin=j;
              cmax=i;}
 }
 if (cmin == cmax) cout<<0;
 else
 cout<<cmin<<" "<<cmax;

 return 0;
 }
