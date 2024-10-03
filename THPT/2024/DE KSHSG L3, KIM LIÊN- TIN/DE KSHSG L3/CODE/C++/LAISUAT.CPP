#include <bits/stdc++.h>
#define N int(1e5)
#define ll long long
using namespace std;
ll a[N+5], s[N+5];
ll n,k,kq = N+1;
int timvitri(ll k, int d, int c, int i)
{
    int l = -1,g;
    while (d <= c)
    {
        g = (d+c)/2;
        if (s[i] - s[g] >= k)
        {
            l = g;
            d = g + 1;
        }
        else c = g - 1;
    }
    return l;
}
int main()
{
    freopen("LAISUAT.inp","r",stdin);
    freopen("LAISUAT.out","w",stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i=1; i<=n; i++)
    {
        int p = timvitri(k,1,i,i);
        if (p >= 0)
            if (kq>i-p) kq=i-p;
      }
    cout << kq;
    return 0;
}
