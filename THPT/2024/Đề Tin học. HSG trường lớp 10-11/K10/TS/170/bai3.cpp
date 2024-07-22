#include <bits/stdc++.h>

using namespace std;
bool snt(long long n)
{
    if(n<2)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    cin>>n;
    int dem=0;
    while(n)
    {
        if(snt(n))
        {
            cout<<dem;
            return 0;
        }
        else
        {
            dem++;
            n++;
        }
    }
    return 0;
}
