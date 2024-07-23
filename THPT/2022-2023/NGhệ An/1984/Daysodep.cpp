#include<bits/stdc++.h>
using namespace std;
long long  x[200007],y[200007];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("Daysodep.Inp","r",stdin);freopen("Daysodep.Out","w",stdout);
    long long n,k,a,kq=0,s,l;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)        {x[i]=x[i-1]+a;y[i]=y[i-1];}
        else if(a%2!=0)   {y[i]=y[i-1]+a;x[i]=x[i-1];}
        for(int h=0;h<i;h++)
        {
           s=x[i]-x[h];l=y[i]-y[h];
           if((s!=0)&&(l!=0))
              {
                 if((s-l>=0)&&(s-l<=k))    kq++;
              }
           else break;
        }
    }
    cout<<kq;
}
