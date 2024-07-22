#include <bits/stdc++.h>

using namespace std;
bool snt (long long n)
{
    if(n<=1)
        return false;
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long n,a;
    cin>>n;
    for(long long i=n+1;i<=n+1000;i++)
        if(snt(i)==true)
        {
            a=i;
            break;
        }
    cout<<a-n;
    return 0;
}
