#include <bits/stdc++.h>
#define ll long long
#define name "Daysodep"
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
int n,k;
ll a[200005];
namespace sub1
{
    ll x,y,ans=0;
    void sol()
    {
        for (int i=1;i<n;++i){
            for (int j=i+1;j<=n;++j){
                x = y = 0;
                for (int o=i;o<=j;++o){
                    if (a[o] % 2 == 0) x += a[o];
                    else y += a[o];
                }
                if (x != 0 && y != 0 && x - y >= 0 && x - y <= k)
                    ans++;
            }
        }
        cout<<ans;
        return;
    }
}
namespace sub2
{
    ll x[2005],y[2005],ans=0;
    void sol()
    {
        x[0] = y[0] = 0;
        for (int i=1;i<=n;++i){
            x[i] = x[i-1];
            y[i] = y[i-1];
            if (a[i] % 2 == 0) x[i] += a[i];
            else y[i] += a[i];
        }
//        for (int i=1;i<=n;++i)
//            cout<<i<<" "<<x[i]<<" "<<y[i]<<endl;
        for (int i=1;i<n;++i){
            for (int j=i+1;j<=n;++j){
                if (x[j] - x[i-1] > 0 && y[j] - y[i-1] > 0){
                    ll x1 = x[j] - x[i-1];
                    ll y1 = y[j] - y[i-1];
                    if (0 <= x1-y1 && x1-y1 <= k) ans++;
                }
            }
        }
        cout<<ans;
        return;
    }
}
namespace sub3
{
    map <ll,ll> mp;
    ll x[200005],y[200005],ans=0;
    void sol()
    {
        x[0] = y[0] = 0;
        mp[0] = 1;
        for (int i=1;i<=n;++i){
            x[i] = x[i-1];
            y[i] = y[i-1];
            if (a[i] % 2 == 0) x[i] += a[i];
            else y[i] += a[i];
            ans += mp[x[i]-y[i]];
            mp[x[i]-y[i]]++;
        }
        cout<<ans;
        return;
    }
}
namespace sub4
{
    map <ll,ll> mp1;
    ll x[200005],y[200005],ans=0;
    void sol()
    {
//        cout<<mp[0]<<endl;
        x[0] = y[0] = 0;
        mp1[0] = 1;
        for (int i=1;i<=n;++i){
            x[i] = x[i-1];
            y[i] = y[i-1];
            if (a[i] % 2 == 0) x[i] += a[i];
            else y[i] += a[i];
        }
        for (int i=2;i<=n;++i){
            for (int tmp=0;tmp<=k;++tmp){
//                if (mp1[x[i]-y[i]-tmp] > 0)
//                    cout<<i<<" "<<tmp<<" "<<x[i]-y[i]-tmp<<" "<<mp1[x[i]-y[i]-tmp]<<endl;
                ans += mp1[x[i]-y[i]-tmp];
            }
//            cout<<i<<" "<<x[i]<<" "<<y[i]<<" daw"<<endl;
            mp1[x[i-1]-y[i-1]]++;
        }
        cout<<ans;
        return;
    }
}
void xuly()
{
    cin>>n>>k;
    for (int i=1;i<=n;++i)
        cin>>a[i];
    if (k == 0){
        sub3::sol();
        return;
    }
    if (n <= 200){
        sub1::sol();
        return;
    }
    if (n <= 2000){
        sub2::sol();
        return;
    }
    if (n <= 200000){
        sub4::sol();
        return;
    }
//    sub1::sol();
//    cout<<endl;
//    sub2::sol();
//    cout<<endl;
//    sub3::sol();
//    cout<<endl;
//    sub4::sol();
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
