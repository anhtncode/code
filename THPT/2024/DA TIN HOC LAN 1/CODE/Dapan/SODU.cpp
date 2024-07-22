#include <bits/stdc++.h>
using namespace std;
const int N=1e6+2, MOD = 1e9+7;
int n;
long long a[N],res=1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SODU.inp" , "r" , stdin);
    freopen("SODU.out" , "w" , stdout);
    cin >> n;
    for(int i =0;i<n; i++)
        cin >> a[i];
    for(int i=0;i<n;i++){
        res*=a[i];
        res%=MOD;
    }
    cout<<res % MOD;
    return 0;
}
