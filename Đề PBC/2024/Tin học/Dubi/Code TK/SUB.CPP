#include <bits/stdc++.h>
#define N int(1e5)
using namespace std;
int a[N+5]; long long s[N+5];
int n,k,kq = N+1;
int timvitri(int k, int d, int c, int i)
{
    int l = -1;
    while (d <= c)
    {
        int g = (d+c)/2;
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
    freopen("sub.inp","r",stdin);
   // freopen("sub.out","w",stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i=1; i<=n; i++)
    {
        int p = timvitri(k,1,i,i);///tim vi tri p gan nhat sao cho s[i] - s[p] >= k
        if (p >= 0)
            kq = min(kq,i-p);
    }
    cout << kq;
    return 0;
}
