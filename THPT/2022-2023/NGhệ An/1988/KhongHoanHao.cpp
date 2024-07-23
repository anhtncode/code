#include<bits/stdc++.h>
using namespace std;
long long a,b,i,l,c,tam,kq,j;
int main(){
    freopen("KhongHoanHao.Inp","r",stdin);
    freopen("KhongHoanHao.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        l=i;
        tam=0;
        for(j=1;j<=sqrt(l);j++)
            if(l%j==0)
        {
            tam+=j;
            c=l/j;
            if(c*c!=l)
                tam+=c;
        }
        tam-=i;
        if(tam>i)
            kq++;
    }
    cout<<kq;
}
