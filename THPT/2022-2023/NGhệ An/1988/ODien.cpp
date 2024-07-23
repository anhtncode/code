#include<bits/stdc++.h>
using namespace std;
long long i,a[1009],n,m,ktra,tam,kq;
int main(){
    freopen("ODien.Inp","r",stdin);
    freopen("ODien.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=2)
            ktra=1;
    }
    if(n<=100&&m<=100&&ktra==0)
    {
        kq=m-1;
        if(kq<=n)
            cout<<kq;
        else cout<<-1;
    }
    else
    {
        sort(a+1,a+1+n,greater<int>());
        tam=1;
        for(i=1;i<=n;i++)
        if(tam>=m)
            break;
        else
        {
           tam--;
           tam+=a[i];
           kq++;
        }
        if(tam<m)
            cout<<-1;
        else cout<<kq;
    }
}
