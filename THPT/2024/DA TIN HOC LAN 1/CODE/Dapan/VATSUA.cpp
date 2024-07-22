#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int n,k;
int a[N];
long long res;
bool cmp(int a, int b){
return a>b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("VATSUA.inp" , "r" , stdin);
    freopen("VATSUA.out" , "w" , stdout);
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+n+1,cmp);
    res=0;k=0;
    for(int i=1;i<=n;i++)
        if(a[i]-k>0){
            res=res+a[i]-k;
            k++;
        } else break;
    cout<<res;
    return 0;
}

