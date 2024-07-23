#include<bits/stdc++.h>
using namespace std;
int a,b;
int tonguoc(int n)
{
    int s=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        s+=i+n/i;
    int k=sqrt(n);
    if(k*k==n) s=s-k;
    return s;

}

int main()
{
    freopen("KhongHoanHao.INP","r",stdin);
    freopen("KhongHoanHao.OUT","w",stdout);


    cin>>a;
    cin>>b;
    int dem =0;
    for(int i =a ; i<=b;i++)
    {
        if((tonguoc(i)-i)>i)
            dem++;
    }
    cout<<dem;

    return 0;
}
