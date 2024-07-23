#include <bits/stdc++.h>
#define ll long long
#define name "KhoiNghiep"
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
int n;
pll a[200005],b[200005],f[200005];
namespace sub1
{
    ll ans = LLONG_MAX;
    int c[200005];
    void sol()
    {
        for (int i=1;i<=n;++i)
            c[i] = i;
        do
        {
            int sl = 0;
            ll s = 0;
            for (int i=1;i<=n;++i){
                if (sl < f[c[i]].fi) s += f[c[i]].se;
                sl++;
            }
            ans = min(ans,s);
        }
        while(next_permutation(c+1,c+1+n));
        cout<<ans;
        return;
    }
}
namespace sub2
{
    void sol()
    {
        int sl = 0;
        ll ans = 0;
        for (int i=1;i<=n;++i){
            if (sl >= a[i].fi) break;
            ans += a[i].se;
            sl++;
        }
        cout<<ans;
        return;
    }
}

namespace sub3
{
    void sol()
    {
        int sl = 0;
        ll ans = 0;
        for (int i=1;i<=n;++i){
            if (sl < b[i].se) ans += b[i].fi;
            sl++;
        }
        cout<<ans;
        return;
    }
}
bool cmpa(pll x,pll y)
{
    if (x.fi > y.fi) return false;
    if (x.fi == y.fi){
        if (x.se > y.se) return false;
    }
    return true;
}
bool cmpb(pll x,pll y)
{
    if (x.fi > y.fi) return false;
    if (x.fi == y.fi){
        if (x.se < y.se) return false;
    }
    return true;
}
void xuly()
{
    cin>>n;
    for (int i=1;i<=n;++i){
        cin>>f[i].fi>>f[i].se;
        a[i].fi = f[i].fi;
        a[i].se = f[i].se;
        b[i].fi = f[i].se;
        b[i].se = f[i].fi;
    }
    sort(a+1,a+1+n,cmpa);
    sort(b+1,b+1+n,cmpb);
//    for (int i=1;i<=n;++i)
//        cout<<b[i].fi<<" "<<b[i].se<<endl;
    if (a[1].fi == a[n].fi){
        sub2::sol();
        return;
    }
    if (b[1].fi == b[n].fi){
        sub3::sol();
        return;
    }
    sub1::sol();
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".inp","r",stdin);
    freopen(name".out","w",stdout);
    xuly();
    return 0;
}
