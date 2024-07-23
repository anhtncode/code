#include <bits/stdc++.h>

using namespace std;
long long n,i,a[2*1000001],b[2*1000001],d=0,e=0;
int main()
{
    freopen("KhoiNghiep.inp","r",stdin);
    freopen("KhoiNghiep.out","w",stdout);
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for( i=0;i<n;i++)
    {
        if(a[a[i]-1]==0)
        {
          e++;
        }
        else{
            if(e==a[a[i]-1])
            {
                e++;
            }
            else{
                d=d+b[a[i]-1];
               e++;
            }
        }
    }
    cout<<d;
    return 0;
}
