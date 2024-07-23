#include<bits/stdc++.h>
using namespace std;
long long a[200007],b[200007];
int main()
{
    freopen("KhoiNghiep.Inp","r",stdin);freopen("KhoiNghiep.Out","w",stdout);
    long long n,e=0,kq=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        if(e>=a[i])   {e++;}
        else
        {
            kq=kq+b[i];e++;
        }
    }
    cout<<kq;
}
