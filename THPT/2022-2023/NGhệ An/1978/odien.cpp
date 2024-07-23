#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1002];
ll n, m;
bool flag = false;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("odien.inp", "r", stdin);
    freopen("odien.out", "w", stdout);
    cin >> n >> m;
    for(ll i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1,greater<ll>());
    if(m == 1) {cout << 0; return 0;}
    ll dem = a[1], res = 1;
    for(ll i=2; i<=n; i++)
    {
        if(dem >= m) {flag = true; break;}
        res++;
        dem += a[i] - 1;
    }
    if(flag == false) {cout << -1; return 0;}
    cout << res;
    return 0;
}
