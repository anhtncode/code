#include<bits/stdc++.h>
using namespace std;
int a[1000010], b[1000010];
pair<int, int> p[1000010];
bool cmp(pair<int, int> a, pair<int, int> b )
{
    if (a.first<b.first) return 1;
    else if (a.first>b.first) return 0;
    else
        return a.second<b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("KhoiNghiep.Inp", "r", stdin);
    freopen("KhoiNghiep.Out", "w", stdout);
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){
        int x,y;
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
    }
    sort(p+1, p+n+1, cmp);
    int r=0,q=0,d=0;
    for (int i=1; i<=n; i++){
        if (p[i].first<=q){
            q++;
        }
        else {
            d+=p[i].second;
            q++;
        }
    }
    cout<<d;
}


