#include<bits/stdc++.h>
using namespace std;
bool cp(int n)
{
    if (n==sqrt(n)*sqrt(n)) return 1;
    else return 0;
}
bool hh(int n)
{
    int s=0;
    for (int i=1; i<=sqrt(n); i++)
        if (n%i==0) s+=i+n/i;
    if (cp(n)) s=s-sqrt(n);
    if (s>2*n) return 1;
    else return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("KhongHoanHao.Inp", "r", stdin);
    freopen("KhongHoanHao.Out", "w", stdout);
    int a,b,d=0;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
        if (hh(i)) d++;
    cout<<d;
}
