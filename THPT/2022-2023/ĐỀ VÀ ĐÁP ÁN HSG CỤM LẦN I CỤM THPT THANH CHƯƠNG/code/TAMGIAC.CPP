#include <bits/stdc++.h>
#define N 1000
#define ll long long
using namespace std;
int a[N+5], b[N+5], c[N+5];
int n;
ll ans;
int main()
{
    freopen("TAMGIAC.inp","r",stdin);
    freopen("TAMGIAC.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    for (int i=1; i<=n; i++) cin >> b[i];
    for (int i=1; i<=n; i++) cin >> c[i];
    sort(c+1,c+n+1);
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
    {
        ll k1 = upper_bound(c+1,c+n+1,abs(a[i]-b[j])) - c;
        ll k2 = lower_bound(c+1,c+n+1,abs(a[i]+b[j])) - c - 1;
        if (k1 <= k2)
            ans += k2 - k1 + 1;
    }
    cout << ans;
    return 0;
}
