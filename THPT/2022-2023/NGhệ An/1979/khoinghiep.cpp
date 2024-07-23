#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
ll n,ans,cp,s;
pair<ll,ll> a[200005];
bool ck[200005],sub1=true;
ll tk(ll l, ll r)
{
    ll vt=l,m=a[l].se;
    for (ll x=l+1;x<=r;x++)
    {
        if (ck[x]==true) continue;
        if (a[x].se<=m)
        {
            m=a[x].se;
            vt=x;
        }
    }
    return vt;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("khoinghiep.inp","r",stdin);
    freopen("khoinghiep.out","w",stdout);
    cin>>n;
    for (ll i=1;i<=n;i++)
    {
        cin>>a[i].fi>>a[i].se;
        //b[i]=a[i].se;
    }
    sort(a+1,a+1+n);
    for (ll i=2;i<=n;i++)
    {
        if (a[i].fi!=a[i-1].fi)
        {
            sub1=false;
            break;
        }
    }
    if (sub1==true)
    {
        for (ll i=1;i<=a[1].fi;i++)
        {
            cp+=a[i].se;
        }
        cout<<cp;
        return 0;
    }
    for (ll i=1;i<=n;i++)
    {
        if (ck[i]==true) continue;
        if (a[i].fi>s)
        {
            ll v=tk(i,n);
            cp+=a[v].se;
            ck[v]=true;
            s++;
            i--;
        }
        else s++;
    }
    cout<<cp;
    return 0;
}

