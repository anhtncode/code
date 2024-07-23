#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;++i)
#define e0 exit(0)
#define ar array
using namespace std;
const int N=2e5+1;
ll n,res=1e17,dp[4000005];
ar<ll,2> a[N],b[N];
//a : b truoc
//b : a truoc
vector<ll> ans;
void sub2(){
    sort(a+1,a+n+1);
    ll res=0;
    f(i,1,n){
        if(i<=a[i][1])res+=a[i][0];
    }
    cout<<res;
}
void sub3(){
    sort(b+1,b+n+1);
    ll res=0;
    f(i,1,n){
        if(b[i][0]>=i)res+=b[i][1];
    }
    cout<<res;
}
void sub1(){
    do{
        ll cnt=0,ss=0;
        for(auto k:ans){
            //cout<<k<<" ";
            if(b[k][0]>cnt)ss+=b[k][1];
            ++cnt;
        }
        //cout<<"\n";
        res=min(res,ss);
    }
    while(next_permutation(ans.begin(),ans.end()));
    cout<<res;
}
void sub4(){
    f(i,1,(1<<n)-1)dp[i]=1e17;
    dp[0]=0;
    f(i,0,(1<<n)-1){
        f(j,1,n){
            if((i&(1<<(j-1)))==0){
                if(__builtin_popcount(i)==b[j][0])dp[i|(1<<(j-1))]=min(dp[i|(1<<(j-1))],dp[i]);
                else dp[i|(1<<(j-1))]=min(dp[i|(1<<(j-1))],dp[i]+b[j][1]);
            }
        }
    }
    cout<<dp[(1<<n)-1];
}
void solve(){
    cin>>n;
    f(i,1,n)ans.push_back(i);
    f(i,1,n){
        ll x,p;
        cin>>x>>p;
        a[i][0]=p;
        a[i][1]=x;
        b[i][0]=x;
        b[i][1]=p;
    }
    ll ok=1,xx=a[1][1];
    f(i,1,n){
        if(a[i][1]!=xx)ok=0;
    }
    if(ok)sub2();
    else{
        ok=1,xx=b[1][1];
        f(i,1,n){
            if(b[i][1]!=xx)ok=0;
        }
        if(ok)sub3();
        else {
            if(n<=10)sub1();
            else sub4();
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("KhoiNghiep.Inp","r",stdin);
    freopen("KhoiNghiep.Out","w",stdout);
    solve();
}
/*
4
3 6
3 2
3 5
3 7

4
3 6
1 6
0 6
3 6
*/
