#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll a,n,t;

int main()
{
    freopen("rgc.inp","r",stdin);
    freopen("rgc.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (cin>>a)
    {
    for(ll i = sqrt(a);i >= 1;i--)
    {
        if(a % (i * i) == 0)
        {
            cout << i << " " << a / (i * i)<< "\n";
            break;
        }
    }
    }
    return 0;
}
