#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2*1e5+2;
const string File_Name="KhoiNghiep";
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
ll n;
pair<ll,ll> a[N];
void init()
{
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i].fi>>a[i].se;
    sort(a+1,a+n+1);
    ll ans=0,e=0;
    for(ll i=1;i<=n;i++)
    {
        if(a[i].fi<=e) e++;
        else {ans+=a[i].se;e++;}
    }
    cout<<ans;
}
int main()
{
    file();
    init();
    return 0;
}

