#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a, b, res = 0;
bool check(ll n)
{
    ll s = 0;
    for(ll i=1; i*i<=n; i++)
    {
        if(n % i == 0) s += i + n/i;
        if(i * i == n) s -= i;
    }
    return(s > 2*n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("khonghoanhao.inp", "r", stdin);
    freopen("khonghoanhao.out", "w", stdout);
    cin >> a >> b;
    for(ll i=a; i<=b; i++)
    {
        if(check(i)) res++;
    }
    cout << res;
    return 0;
}
