#include<bits/stdc++.h>
using namespace std;
int main()
{ freopen("KhongHoanHao.inp","r",stdin);
  freopen("KhongHoanHao.out","w",stdout);
  int a,b;
  cin>>a>>b;
  int dem=0,s,k;
  for(int i=a;i<=b;++i)
  { s=1; k=i;
      for(int j=2;j<=int(sqrt(k));++j)
      {
          if (k%j==0) {s=s+j; if (k/j!=j) s=s+k/j;}
          if (s>k) {dem=dem+1;break;}
         }}
cout<<dem;
return 0;
}
