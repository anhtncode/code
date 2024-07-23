#include <bits/stdc++.h>

using namespace std;
int a[1000000],c[1000000],l[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    freopen("Daysodep.Inp","r",stdin);
    freopen("Daysodep.Out","w",stdout);

    int n,k,i,j;
    long long t,tc,tl,kq=0;
    cin >>n>>k;

    c[0]=0;l[0]=0;
    for(i=1;i<=n;i++)
    { cin >> a[i];
    if(a[i]%2==0){ c[i]=c[i-1]+a[i];l[i]=l[i-1];}
    if(a[i]%2!=0){ l[i]=l[i-1]+a[i];c[i]=c[i-1];}
    }

     if(c[n]==0 || l[n]==0) cout << 0;
     else
     {
     for(i=1;i<=n-1;i++)
     for(j=i+1;j<=n;j++)
     if(l[j]!=0)
     {
        tc=c[j]-c[i-1];
        tl=l[j]-l[i-1];
        if(tc>0 && tl>0 && tc-tl>=0 && tc-tl<=k) kq++;
     }
     cout << kq;
     }
    return 0;
}
