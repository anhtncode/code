#include <bits/stdc++.h>

using namespace std;
int a[100000],b[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    freopen("KhoiNghiep.Inp","r",stdin);
    freopen("KhoiNghiep.Out","w",stdout);

    int n,ma,t=0;
    cin >> n;

    int i;
    for(i=1;i<=n;i++)
    {cin >> a[i]>> b[i];if(i==1) ma=b[i]; if(b[i]>ma) ma=b[i];}
    sort (a+1,a+n+1);
    for(i=1;i<=ma;i++)
    t=t+a[i];
    cout << t;

    return 0;
}
