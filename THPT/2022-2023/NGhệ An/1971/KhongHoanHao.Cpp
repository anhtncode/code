#include <bits/stdc++.h>
#define ll long long
#define name "KhongHoanHao"
using namespace std;
int a,b;
namespace sub1
{
    int ans = 0;

    int demu(int x)
    {
        int res = 1;
        for (int j=2;j<=sqrt(x);++j){
            if (x % j == 0){
                res += j;
                res += x/j;
                if (j*j == x) res -= j;
            }
        }
        return res;
    }
    void sol()
    {
        for (int i=a;i<=b;++i){
            if (i < demu(i)) ans++;
        }
        cout<<ans;
        return;
    }
}

namespace sub2
{
    int ans = 0;
    const int nmax = 1e5;
    int f[nmax + 5];
    void setup()
    {
        for (int i=1;i<=nmax;++i)
            f[i] = 1;
        for (int i=2;i<=nmax;++i){
            for (int j=i+i;j<=nmax;j+=i)
                f[j] += i;
        }
    }
    void sol()
    {
        setup();
        for (int i=a;i<=b;++i){
//            cout<<i<<" "<<f[i]<<endl;
            if (f[i] > i) ans++;
        }
        cout<<ans;
        return;
    }
}
void xuly()
{
    cin>>a>>b;
    if (b <= 1000){
        sub1::sol();
        return;
    }
//    sub1::sol();
//    cout<<endl;
    sub2::sol();
//    sub1::sol();
//    cout<<endl;
//    sub2::sol();
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
