#include <bits/stdc++.h>

using namespace std;
bool cmp(int x,int y)
{
    return(x>y);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    freopen("ODien.Inp","r",stdin);
    freopen("ODien.Out","w",stdout);
    int n,m,i,t=1,d=0;
    cin >>n>>m;
    int a[1005];
    for(i=1;i<=n;i++) cin >> a[i];
    sort (a+1,a+n+1,cmp);
    for(i=1;i<=n;i++)
         if(t<m)
         {
         t=t+a[i]-1;d++;
         }
         else break;
    if(t>=m) cout << d;
    else cout << -1;
    return 0;
}
