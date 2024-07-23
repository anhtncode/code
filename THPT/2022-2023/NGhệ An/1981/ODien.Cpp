#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("ODien.Inp", "r", stdin);
    freopen("ODien.Out", "w", stdout);
    int m,n;
    cin>>m>>n;
    int a[m+10];
    for (int i=1; i<=m; i++)
        cin>>a[i];
    sort(a+1, a+m+1, cmp);
    int s=0,d=0,t=0;
    for (int i=1; i<=n; i++){
        if (i==1){
            s+=a[i];
            d++;
            if (s>=n) {
                cout<<d;
                t++;
                break;
            }
        }
        else {
            s+=a[i]-1;
            d++;
            if (s>=n) {
                cout<<d;
                t++;
                break;
            }
        }
    }
    if (t==0) cout<<-1;
}

