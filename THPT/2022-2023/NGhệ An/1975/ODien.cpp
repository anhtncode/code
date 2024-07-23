#include <bits/stdc++.h>
#define ll int
#define fi first
#define se second
using namespace std;
const ll N=1002;
const string File_Name="ODien";
void file()
{
    if(fopen((File_Name+".inp").c_str(),"r"))
    {
        freopen((File_Name+".inp").c_str(),"r",stdin);
        freopen((File_Name+".out").c_str(),"w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
}
ll n,m;
ll a[N];
void init()
{
    cin>>n>>m;
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<ll>());
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(m<=a[i]) {cout<<i;return;}
        else {
                a[i]--;
        m-=a[i];
        }
    }
    cout<<-1;
}
int main()
{
    file();
    init();
    return 0;
}

