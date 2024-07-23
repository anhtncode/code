//-----//
#include<bits/stdc++.h>
using namespace std;
int a[100000], b[100000], c[100000], n, s, k, x, y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Daysodep.Inp", "r", stdin);
    freopen("Daysodep.Out", "w", stdout);
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    for(int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1];
        c[i] = c[i - 1];
        if(a[i] % 2 == 0) b[i] = b[i] + a[i];
        else c[i] = c[i] + a[i];
    }
    for(int i = 1; i < n; i++)
        for(int j = 1; j <= i + 1; j++)
    {
        x = b[j] - b[i - 1];
        y = c[j] - c[i - 1];
        if(x > 0 and y > 0 and 0 <= x - y and x - y <= k)
            s++;
    }
    cout<<s;
}
