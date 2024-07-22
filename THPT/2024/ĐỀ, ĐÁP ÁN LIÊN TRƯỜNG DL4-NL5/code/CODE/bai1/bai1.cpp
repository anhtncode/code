
#include <bits/stdc++.h>
#define na "11/"
using namespace std;
long long n, a, b;

int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin>>n>>a>>b;
    cout<<max(1LL*0,a-b)<<' '<<min(a,n-b);
    return 0;
}
