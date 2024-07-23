#include<bits/stdc++.h>
using namespace std;
long long n , k ,a[1000005],d[1000005] ,dc ,dl ,sc ,sl ,dem =0;
int main()
{
    freopen("Daysodep.INP","r",stdin);
    freopen("Daysodep.OUT","w",stdout);

    cin>>n;
    cin>>k;
    if(k==0)
    {
        cout<<0;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2== 0)dc++;
        if(a[i]%2!=0)dl++;
    }
    if((dc==0)||(dl==0)) cout<<0;
    sort(a+1,a+n+1);
    for(int i=1 ;i<=n;i++)
    {
        if(a[i]%2==0) sc+=a[i];
        if(a[i]%2!=0)sl+=a[i];
    }
    if((sc-sl>=0)&&(sc-sl<=k))
       {
           dem++;
            cout<<dem;
       }
    else
        cout<<0;

    return 0;
}
