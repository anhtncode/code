#include <bits/stdc++.h>
using namespace std;

int n,q,k,l,r;
long long  a[100003],d[100003];

void open()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Cuutro.inp","r",stdin);
    freopen("Cuutro.out","w",stdout);
}
int main()
{
    open();
    cin>>n>>q;
    for(int i = 1;i<=n;i++)
        cin>>a[i];
    for(int i = 1;i<=n;i++)
        d[i]=a[i]-a[i-1];
    for(int i = 1;i<=q;i++)
    {
        cin>>l>>r>>k;
        d[l]+=k;
        d[r+1]-=k;
    }
    for(int i =1;i<=n;i++)
         a[i]=a[i-1]+d[i];
    for(int i = 1;i<=n;i++)
         cout<<a[i]<<" ";
return 0;
}
