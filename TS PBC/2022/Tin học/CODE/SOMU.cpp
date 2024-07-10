#include <bits/stdc++.h>
using namespace std;
long long p,n,dem=0,q,t;
int main()
{
    freopen("SOMU.INP","r",stdin);
    freopen("SOMU.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        for(int i=p;i<=n;i+=p)
        {
            q=i;
            while(q%p==0)
            {
                dem++;
                q/=p;
            }
        }
        cout<<dem<<"\n";
        dem=0;
    }

}
