#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int n,m,k,ta,tb,a[N],b[N];
int main()
{
	freopen("VANCHUYEN.INP","r",stdin);
   freopen("VANCHUYEN.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>ta>>tb>>k;
    for(long long i=1;i<=n;i++)
        cin>>a[i];
    for(long long i=1;i<=m;i++)
        cin>>b[i];
    if(k >= min(n,m))
    {
        cout<<-1;
        return 0;
    }
    int tg = 0;
    for(long long i=0;i<=k;i++)
    {
        int l = 1,r = m,j = -1;
        while(l <= r)
        {
            int mid = l + r >> 1;
            if(b[mid] >= a[i+1] + ta)
            {
                j = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if(j == -1 || j + k - i > m)
        {
            cout<<-1;
            return 0;
        }
        tg = max(tg, b[j+k-i] + tb);
    }
    cout<<tg;
}
