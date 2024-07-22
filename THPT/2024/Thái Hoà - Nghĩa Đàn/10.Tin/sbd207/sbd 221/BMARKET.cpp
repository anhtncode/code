#include<bits/stdc++.h>;
using namespace std;
int mait()
{
int y,k,n,d=0;
freopen("BMARKET.inp","r",stdin);
freopen("BMARKET.out","w",stdout);
cin>>y>>k>>n;
for(int i=1;i<=n/k;i++)
if (i*k>y)
    {
       cout<<i*k-y<<" ";
       d++;
    }
    if(d==0)
        {
            cout<<"-1";
        }
        return 0;

}


