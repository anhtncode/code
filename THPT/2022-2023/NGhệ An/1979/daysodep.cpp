#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005],n,k,ans,fc[200005],fl[200005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("daysodep.inp","r",stdin);
    freopen("daysodep.out","w",stdout);
    cin>>n>>k;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]%2==0)
        {
            fc[i]=fc[i-1]+a[i];
            fl[i]=fl[i-1];
        }
        else
        {
            fc[i]=fc[i-1];
            fl[i]=fl[i-1]+a[i];
        }
    }
    for (ll i=1;i<n;i++)
    for (ll j=i+1;j<=n;j++)
    {
        ll x=fc[j]-fc[i-1]-(fl[j]-fl[i-1]);
        if (x<=k&&x>=0)
        {
            //cout<<i<<' '<<j<<'\n';
            ans++;
        }
    }
	cout<<ans;
    return 0;
}

