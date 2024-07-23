#include<bits/stdc++.h>
using namespace std;
int main()
{ freopen("ODien.inp","r",stdin);
  freopen("ODien.out","w",stdout);
  int n,m;
  cin>>n>>m;
  int a[n+1],s=0;
  for(int i=1;i<=n;++i)
  {
      cin>>a[i];
  }
sort(a+1,a+n+1);
for(int i=n;i>=1;--i)
{
    s=s+a[i];
    if (m>s) {s=s-1;}
    else {cout<<n-i+1; return 0;}
    }
    cout<<"-1";
    return 0;
}
