#include <bits/stdc++.h>
using namespace std;
long long n,a[1000005],d=0;
int main()
{
    freopen("XOAPTCHAN.inp","r",stdin);
    freopen("XOAPTCHAN.out","w",stdout);
 cin>>n;
 for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0) d++;
    }
 if(d==n) cout<<0;
 else
    for(int i=1;i<=n;i++)
         if(a[i]%2!=0) cout<<a[i]<<" ";
}
