#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,t,p,s;
    cin>>a>>b>>c;
    t=a*b;
    p=a*c;
    s=b*c;
    if((t>p)&&(t>s))
        cout<<t;
    else
    if((s>t)&&(s>p))
        cout<<s;
    else
    if((p>t)&(p>s))
        cout<<p;
    return 0;
}
