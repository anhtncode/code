#include<bits/stdc++.h>
using namespace std;
long long n,s,i=0;
int main()
{
    freopen("TONGTICH.inp","r",stdin);
    freopen("TONGTICH.out","w",stdout);
    cin>>n;
    //cout<<(n*(n+1)*(n+2))/3<<endl;
    for(i=1;i<=n;i++) s=s+i*(i+1);     cout<<s;

}
