#include <bits/stdc++.h>
using namespace std;
const int N=1e6+2;
int a[N];
int maxr,minl,vtmin,vtmax,n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("DOICHO.inp" , "r" , stdin);
    freopen("DOICHO.out" , "w" , stdout);
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];
    maxr=minl=a[1];
    vtmax=vtmin=1;
    for(int i=2;i<=n;i++){
        if(maxr<=a[i]){
            maxr=a[i];
            vtmax=i;
        }
        if(minl>a[i]){
            minl=a[i];
            vtmin=i;
        }
    }
    swap(a[vtmax],a[vtmin]);
    for (int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
