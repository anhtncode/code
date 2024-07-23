#include<bits/stdc++.h>
using namespace std;
long long a[1007];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ODien.Inp","r",stdin);freopen("ODien.Out","w",stdout);
    long long n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(m==1)       {cout<<0;return 0;}
    else
    {
        sort(a,a+n,greater<long long> ());
        long long kq=1,gt=a[0],i=1;
        while(gt<m)
        {
            gt=gt-1+a[i];kq++;
            i++;
            if(i==n)   break;
        }
        if(gt<m)    {cout<<-1;return 0;}
        else if(gt>=m)   {cout<<kq;return 0;}
    }
}
