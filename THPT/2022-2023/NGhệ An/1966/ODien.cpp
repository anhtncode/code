#include <bits/stdc++.h>
using namespace std;
long long n,m,a[100001],d;
int main()
{
    freopen("ODien.inp","r",stdin);
    freopen("ODien.out","w",stdout);
    cin>>n;
    cin>>m;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    long long i=n;
    d=0;
    while(i>0)
    {
        if(m<=0) break;
        m=m-a[i];
        if(m>0) m=m+1;
        d++;
        i--;
    }
 if(m<=0) cout<<d;
   else cout<<-1;
    return 0;
}
