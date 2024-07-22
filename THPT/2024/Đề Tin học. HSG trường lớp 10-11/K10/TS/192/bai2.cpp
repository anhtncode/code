#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,m,n,k;
    cin>>a>>b>>c;
    m=a*b;
    n=a*c;
    k=b*c;
    if(m>n and m>k)
    {
        cout<<m;
    }
    if(n>m and n>k)
    {
        cout<<n;
    }
    if(k>m and k>n)
    {
        cout<<k;
    }
    return 0;
}
