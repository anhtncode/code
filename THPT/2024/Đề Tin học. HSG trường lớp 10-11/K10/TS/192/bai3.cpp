#include <bits/stdc++.h>
using namespace std;
bool snt(int n)
{
    int i;
    if(n<=1)
        return false;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,i,dem;
    cin>>n;
    dem=0;
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
    cout<<dem;
         return 0;
}
