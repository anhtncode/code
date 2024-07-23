#include<bits/stdc++.h>
#define ll long long
#define N 200000
using namespace std;
ll a[N+2], c[N+2], l[N+2];
ll n, k, res = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("daysodep.inp", "r", stdin);
    freopen("daysodep.out", "w", stdout);
    cin >> n >> k;
    c[0] = 0, l[0] = 0;
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            c[i] = c[i-1] + a[i];
            l[i] = l[i-1];
        }
        else
        {
            l[i] = l[i-1] + a[i];
            c[i] = c[i-1];
        }
    }
    for(ll i=2; i<=n; i++)
    {
        for(ll j=i-1; j>0; j--)
        {
            ll x = c[i] - c[j-1];
            ll y = l[i] - l[j-1];
            if( 0 <= (x - y) && (x - y) <= k && x != 0 && y != 0)
            {
                res++;
                //cout << i << " " << j << '\n';
            }
        }
    }
    cout << res;
    return 0;
}
