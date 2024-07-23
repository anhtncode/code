#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;++i)
#define e0 exit(0)
using namespace std;
const int N=2e5+1;
ll n,a[N],m,chan[N],le[N],cntc[N],cntl[N],k,h[N];
map<ll,ll> mp;
void solve(){
    cin>>n>>k;
    f(i,1,n){
        cin>>a[i];
        le[i]=le[i-1];
        chan[i]=chan[i-1];
        cntl[i]=cntl[i-1]+(a[i]%2==1);
        cntc[i]=cntc[i-1]+(a[i]%2==0);
        if(a[i]&1)le[i]+=a[i];
        else chan[i]+=a[i];
    }
    ll res=0;
    if(n<=2*1000){
        f(i,1,n){
            f(j,i,n){
                if(cntl[j]-cntl[i-1]>=1&&cntc[j]-cntc[i-1]>=1){
                    ll x=chan[j]-chan[i-1],y=le[j]-le[i-1];
                    if(x-y>=0&&x-y<=k)++res;
                }
            }
        }
        cout<<res;
    }
    else{
        ll idx=1;
        mp[0]++;
        f(i,1,n){
            if(!cntc[i]||!cntl[i])continue;
            while(cntc[idx]<cntc[i]&&cntl[idx]<cntl[i]&&idx<i-1){
                mp[chan[idx]-le[idx]]++;
                ++idx;
            }
            ll x=chan[i]-le[i];
            //if(i==4)cout<<mp[3]<<" ";
            f(j,x-k,x){
                res+=mp[j];
            }
            //
           // cout<<res<<" ";
        }
        cout<<res;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("Daysodep.Inp","r",stdin);
    freopen("Daysodep.Out","w",stdout);
    solve();
}
/*
4 4
8 5 4 1

1 5
2
*/
