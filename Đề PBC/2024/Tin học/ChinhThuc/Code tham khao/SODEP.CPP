#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll xuli(ll k,ll n)
{
    ll kq = 0,tmp = k;
    while(0<tmp&&tmp<=n)
    {
        kq+=n/tmp;
        tmp*=k;
    }
    return kq;
}
int main()
{
    freopen("SODEP.INP","r",stdin);
    freopen("SODEP.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<min(xuli(2,b)-xuli(2,a-1),xuli(5,b)-xuli(5,a-1))%mod<<'\n';
    }
}

