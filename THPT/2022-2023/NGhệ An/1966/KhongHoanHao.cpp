#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a,b,d=0;
long long kt(long long n)
{
    ll t=0;
    for(ll i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            t=t+i;
            if(t>n) return 0;
        }
    }
  return 1;

}
int main()
{
    freopen("KhongHoanHao.inp","r",stdin);
    freopen("KhongHoanHao.out","w",stdout);
    cin>>a>>b;
    ll i=a;
    while(i<=b)
    {
        if(kt(i)==0) d++;
        i++;
    }
    cout<<d;
    return 0;
}
