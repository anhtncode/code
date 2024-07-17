#include <bits/stdc++.h>
#define ll long long
using namespace std;
int q, f['z'+5];
string s,t;
void solve()
{
    for(auto u : t)
    {
        if(!f[u])
        {
            cout<<"No"<<'\n';
            return ;
        }
    }
    cout<<"Yes"<<'\n';
}
int main()
{
    freopen("WORD.INP","r",stdin);
    freopen("WORD.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>s>>q;
    for(auto u : s) f[u] = 1;
    while(q--)
    {
        cin>>t;
        solve();
    }
}
