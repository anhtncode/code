/**
darkemeralddd
**/
#include <bits/stdc++.h>
#define emerald "ODien"
#define l2 long long
#define memset(a,b) memset(a,b,sizeof(a))
using namespace std;
int n,m,a[1005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen(emerald".Inp","r",stdin);
    freopen(emerald".Out","w",stdout);

    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }

    if(m==1) cout<<0;
    else {
        sort(a+1,a+1+n,greater<int>());
        int t=1;
        m-=a[1];
        for(int i=2; i<=n; i++) {
            if(m<=0) break;
            m-=a[i]-1;
            t++;
        }

        if(m>0) cout<<-1;
        else cout<<t;
    }
}
