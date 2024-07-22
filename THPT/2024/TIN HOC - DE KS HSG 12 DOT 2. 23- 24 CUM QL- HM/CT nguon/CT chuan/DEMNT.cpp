#include <bits/stdc++.h>
using   namespace   std;
const int maxn=1e7;
bool    F[maxn+5];
int a,b,ans;
///--------------------------
void    sangNT(){
    memset(F,1,sizeof(F));
    F[1]=0;
    for(int i=2;i*i<=maxn;++i)
        if (F[i]==1) for(int j=i*i;j<=maxn;j+=i)
                        F[j]=0;
}
///--------------------------
void    xuli(){
    sangNT();
    cin>>a>>b;
    ans=0;
    for(int i=a;i<=b;i++) ans+=F[i];
    cout<<ans;
}
///--------------------------
int     main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
      	freopen("DEMNT.inp", "r", stdin);
    	freopen("DEMNT.out", "w", stdout);
    xuli();
}





