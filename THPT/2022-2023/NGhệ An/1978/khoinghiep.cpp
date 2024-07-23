#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
using namespace std;
pii a[200005];
ll n, res = 0, dem = 0;
bool cmp(pii x, pii y)
{
    if(x.first == y.first) return (x.second < y.second);
    return(x.first < y.first);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("khoinghiep.inp", "r", stdin);
    freopen("khoinghiep.out", "w", stdout);
    cin >> n;
    ll vtr = n + 1;
    for(ll i=1; i<=n; i++) cin >> a[i].first >> a[i].second;
    sort(a+1,a+n+1,cmp);
    //for(ll i=1; i<=n; i++) cout << a[i].first << " " << a[i].second << '\n';
    for(ll i=1; i<=n; i++)
    {
        if(a[i].first > n) {res += a[i].second; dem++;}
    }
    for(ll i=1; i<=n; i++) if(a[i].first > n) {vtr = i; break;}
    for(ll i=1; i<vtr; i++)
    {
        if(dem >= a[i].first) dem++;
        else {res += a[i].second; dem++;}
    }
    cout << res;

    return 0;
}
