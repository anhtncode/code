#include<bits/stdc++.h>
using namespace std;
pair<int, int> p[1000010];
int a[1000010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("Daysodep.Inp", "r", stdin);
    freopen("Daysodep.Out", "w", stdout);
    int k,n;
    cin>>n>>k;
    int x=0,y=0;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        if (a[i]%2==0) x+=a[i];
        else y+=a[i];
        p[i].first=x;
        p[i].second=y;
    }
    p[0].first=0; p[0].second=0;
    int d=0;
    for (int i=1; i<=n; i++)
        for (int j=i; j<=n; j++){
            int g,h;
            g=p[j].first-p[i-1].first;
            h=p[j].second-p[i-1].second;
            if ((p[j].first!=p[i-1].first) && (p[j].second!=p[i-1].second))
            if ((g-h>=0) && (g-h<=k)) d++;
        }
    cout<<d;

}

