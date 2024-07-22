#include <bits/stdc++.h>
using namespace std;
struct trung
{
    int gia,sl;
};
trung a[5001];
int m,n;

bool cmp(trung x, trung y)
{
    return x.gia<y.gia;
}
int main()
{
    freopen("egg.inp","r",stdin);
    freopen("egg.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].gia>>a[i].sl;
    }
    sort(a+1,a+m+1,cmp);
    int tong=0,dem=0;
    int i=1;
    while(i<=m)
    {
       tong=tong+a[i].gia*a[i].sl;
       dem=dem+a[i].sl;
       if(dem==n) break;
       else if(dem>n)
       {
           tong=tong-(a[i].gia*(dem-n));
           break;
       }
       i++;
    }
    cout<<tong;
    return 0;
}
