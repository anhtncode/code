#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    freopen("KhongHoanHao.Inp","r",stdin);
    freopen("KhongHoanHao.Out","w",stdout);
    int a,b,k,j;
    cin >> a>>b;
    int i,t,kq=0;
    for(i=a;i<=b;i++)
    {
     k=sqrt(i);
     t=1;
     for(j=2;j<=k;j++)
     if(i%j==0){t=t+j+(i/j);}
     if(k*k==i&&i%k==0)t=t-k;
     if(t>i)kq++;
    }
    cout << kq;

    return 0;
}
