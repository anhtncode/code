#include<bits/stdc++.h>
using namespace std;
long long n,q;
int a[100007];
map<long long,int>mp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("LUCKY.inp","r",stdin);
    freopen("lucky.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
       {cin>>a[i];mp[a[i]]++;}
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        long long x;
        cin>>x;
        cout<<mp[x]<<endl;
    }

}
