//-----//
#include<bits/stdc++.h>
using namespace std;
int n, m, a[100000], s;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ODien.Inp", "r", stdin);
    freopen("ODien.Out", "w", stdout);
    cin>>n>>m;
    for(int i = 1; i <= n; i++)
    {
        cin>>a[i];
        for(int i = 1; i <= n; i++){s = s + a[i];} s++;
        a[i]--;
        a[m]++;
        if(s == m)
        {
            cout<<s;
            return 0;
        }
        if(s >= m)
        {
            cout<<-1;
            return 0;
        }
        else
    cout<<s;
    }
}
