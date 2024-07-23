#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
const ll N=2*1e5+2;
const string File_Name="Daysodep";
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
ll n,k;
ll a[N];
ll chan[N],le[N];
void sub1()
{
    ll ans=0;
   for(ll i=2;i<=n;i++)
   {
       for(ll j=1;j<i;j++)
       {
           ll chan=0,le=0;
           for(ll o=j;o<=i;o++)
           {
               if(a[o]%2==0) chan+=a[o];
               else le+=a[o];
           }
           if(chan-le<=k&&chan-le>=0&&chan>0&&le>0) ans++;
       }
   }
   cout<<ans;
}
void sub2()
{
    ll ans=0;
    for(ll i=2;i<=n;i++)
    {
        if(a[i]%2==0&&chan[i]>0)
        {
            for(ll j=0;j<i-1;j++)
            {
                if(le[j]!=0)
                {
                  if(chan[i]-chan[j]-le[i]+le[j]<=k&&chan[i]-chan[j]-le[i]+le[j]>=0) ans++;
                }
            }
        }
    }
    cout<<ans;
}
void sub3()
{
    cout<<0;
}
int main()
{
    file();
   cin>>n>>k;
   for(ll i=1;i<=n;i++) cin>>a[i];
   for(ll i=1;i<=n;i++)
    {
        chan[i]=chan[i-1]+a[i]*(a[i]%2==0);
        le[i]=le[i-1]+a[i]*(a[i]%2==1);
    }
    if(n<=200) sub1();
    else if(n<=2000) sub2();
    else sub3();
    return 0;
}

