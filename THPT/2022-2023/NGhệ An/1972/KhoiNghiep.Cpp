//-----//
#include<bits/stdc++.h>
using namespace std;
int a[200002], b[200002], n, t;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("KhoiNghiep.Inp", "r", stdin);
    freopen("KhoiNghiep.Out", "w", stdout);
    cin>>t;
    while(t--);
    {
        cin>>n;
        for(int i = 1; i <= n; i++)
            cin>>a[i]>>b[i];
        sort(b + 1, b + 1 + n);
        cout<<b[1]<<endl;
    }
}
