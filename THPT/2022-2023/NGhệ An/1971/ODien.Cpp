#include <bits/stdc++.h>
#define ll long long
#define name "ODien"
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
int n,m;
int a[1005],s=0;
void xuly()
{
    cin>>n>>m;
    for (int i=1;i<=n;++i)
        cin>>a[i];
    if (m == 1){
        cout<<"0";
        return;
    }
    sort(a+1,a+1+n,greater<int>());
    for (int i=1;i<=n;++i){
        s += a[i];
//        cout<<a[i]<<" "<<s<<endl;

        if (s >= m){
            cout<<i;
            return;
        }
        s--;
    }
    cout<<"-1";
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(name".inp","r",stdin);
    freopen(name".out","w",stdout);
    xuly();
    return 0;
}
