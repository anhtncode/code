#include <bits/stdc++.h>
#define nmax 5000000
#define ll long long
using namespace std;
int n;
int a[nmax + 5], p[nmax + 5];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);

    freopen("COPHIEU.INP","r",stdin);
    freopen("COPHIEU.OUT","w",stdout);
    cin>>n;
    for(int i = n; i>=1; i--) cin>>a[i];
    p[n] = a[n];
    for(int i = n - 1; i>=1; i--)
    {
        p[i] = min(a[i], p[i + 1]);
    }
    int b[nmax + 5] ;
    for(int i = 1; i<=n;i++)
    {
        int j = lower_bound(p + i + 1, p + n + 1, a[i]) - p - 1;
         b[i]=j - i;
    }
     for(int i = n; i>=1; i--) cout<<b[i]<<" ";
     return 0;
}
