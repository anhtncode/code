#include <bits/stdc++.h>
using namespace std;
int main()
{

    freopen ("COVID.inp" , "r" , stdin);
    freopen ("COVID.out" , "w" , stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,i,a[5] = {},dem = 0,temp;
    cin >> n;
    for (i = 0 ; i < n ; i++)
    {
        cin >> temp;
        a[temp]++;
    }
    dem = a[4] + a[3];
    if (a[1] > a[3])
    {
        a[1] = a[1] - a[3];
    }
    else
    {
        a[1] = 0;
    }
    temp = a[1] +2*a[2];
    if (temp % 4 == 0)
    {
        dem += temp / 4;
    }
    else
    {
        dem += temp / 4 + 1;
    }
    cout << dem;
    return 0;
}
