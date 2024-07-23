#include <bits/stdc++.h>

using namespace std;
long long n,k,a[2*1000001],i,d=0,y,tc,tl,tg;
int main()
{
    freopen("Daysodep.inp","r",stdin);
    freopen("Daysodep.out","w",stdout);
    cin>>n>>k;
    for( i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long j,i=1;
    while(i<n)
    {
        tc=0;tl=0;y=0;
       if(a[i]%2==1)
        {
            tl=tl+a[i];
           for(j=i+1;j<=n+1;j++)
            {
                if(a[j]%2==1) tl=tl+a[j];
                else {
                    y=1;
                    tc=tc+a[j];
                }
                if(y!=0)
                {
                    tg=tc-tl;
                    if(tg>=0 && tg<=k)
                    {
                        d++;
                        break;
                    }
                }
            }
        } if(a[i]%2==0)
        {
            tc=tc+a[i];
            for(j=i+1;j<=1+n;j++)
            {
                if(a[j]%2==0) tc=tc+a[j];
                else {
                    y=1;
                    tl=tl+a[j];
                }
                if(y!=0)
                {
                    tg=tc-tl;
                    if(tg>=0 && tg<=k)
                    {
                        d++;
                        break;
                    }
                }
            }
        }
       i++;
    }
    cout<<d;
    return 0;
}
