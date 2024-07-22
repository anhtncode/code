#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
int n;
int f1[N],f2[N],a[N],g[N];
void lis(int f[],int g[]){
    int ln=0;
    for(int i =1;i<=n;i++){
        int dau=1;
        int cuoi=ln;
        int nho=0;
        while(dau<=cuoi){
            int giua=(dau+cuoi)/2;
            if(a[i]>a[g[giua]]){
                nho=giua;
                dau=giua+1;
            }
        else cuoi=giua-1;
        }
        if(nho==ln){
            ln++;
            g[ln]=i;
        }
        if(a[i]<a[g[nho+1]])
        g[nho+1]=i;
        f[i]=ln;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("DAYSODEP.inp" , "r" , stdin);
    freopen("DAYSODEP.out" , "w" , stdout);
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    f1[1]=1;
    lis(f1,g);
    reverse(a+1,a+n+1);//Ham dao mang trong thu vien
    f2[1]=1;
    lis(f2,g);
    int res =0;
    for(int i=1;i<=n;i++)
        res=max(res,2*min(f1[i],f2[n-i+1])-1);
    cout<<res;
    return 0;
}
