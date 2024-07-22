#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c)
        {
            cout<<b*a;
            return 0;
        }
        else
        {
            cout<<c*a;
            return 0;
        }
    }
    else
    {
        if(a<c)
        {
            cout<<c*b;
            return 0;
        }
        else
        {
            cout<<a*b;
            return 0;
        }
    }
    return 0;
}
