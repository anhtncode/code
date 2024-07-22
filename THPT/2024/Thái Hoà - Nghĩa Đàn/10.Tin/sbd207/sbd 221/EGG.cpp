#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t=0;
    cin>>n>>m;
    map<int,int>mp;
    for (int i=0;i<m;i++)
    {
        int g,sl;
    cin>>g>>sl;
    mp[g]+=sl;
    }
    for (auto p=map)
        while(n!=0)
        {
        t+p.first*p.second;
        n=n-p.first;
        }
        cout<<t<<" ";

}
