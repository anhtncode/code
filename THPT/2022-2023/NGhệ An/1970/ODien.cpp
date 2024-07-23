#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(ll i=a;i<=b;++i)
#define e0 exit(0)
using namespace std;
const int N=1e5+1;
ll n,a[N],m;
void solve(){
    cin>>n>>m;
    f(i,1,n)cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    ll s=0,res=0;
    f(i,1,n){
        if(i>1)--s;
        s+=a[i];
        if(s>=m){
            cout<<i;
            e0;
        }
    }
    cout<<-1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("ODien.Inp","r",stdin);
    freopen("ODien.Out","w",stdout);
    solve();
}
/*
3 4
1 2 3
*/
