#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("BMARKET.INP","r",stdin);
     freopen("BMARKET.OUT","w",stdout);
long y,k,n,cnt=0;
cin>>y>>k>>n;
for(int a=1;a<=n/k;a++)
    if(a*k>y){
        cout<<a*k-y<<" ";
        cnt++;
    }
    if(cnt==0){
        cout<<"-1";
    }


return 0;
 }

