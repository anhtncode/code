#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;++i)
#define e0 exit(0)
using namespace std;
const int N1=1e5;
const int N=2e5+1;
ll l,r,cnt[N];
void solve(){
    f(i,1,N1-1){
        f(j,1,(N1-1)/i)cnt[i*j]+=i;
    }
    f(i,1,N1-1)cnt[i]-=i;
    cin>>l>>r;
    ll res=0;
    f(i,l,r){
        if(cnt[i]>i)++res;
    }
    cout<<res;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("KhongHoanHao.Inp","r",stdin);
    freopen("KhongHoanHao.Out","w",stdout);
    solve();
}
