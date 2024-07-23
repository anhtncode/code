#include <bits/stdc++.h>
#define ll int
#define fi first
#define se second
using namespace std;
const ll N=1e5+2;
const string File_Name="KhongHoanHao";
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
ll a,b;
bool thu(ll i)
{
    ll k=sqrt(i);
    if(k*k==i) return true;
    else return false;
}
bool check(ll o)
{
    ll ans=1;
    for(ll i=2;i<sqrt(o);i++)
    {
        if(o%i==0) ans+=i;
        if(o%(o/i)==0) ans+=o/i;
    }
    if(thu(o)==true) ans+=sqrt(o);
    if(ans>o) return true;
    else return false;
}
void init()
{
    cin>>a>>b;
    ll ans=0;
    for(ll i=a;i<=b;i++)
    {
        if(check(i)==true) ans++;
    }
    cout<<ans;
}
int main()
{
    file();
    init();
    return 0;
}

