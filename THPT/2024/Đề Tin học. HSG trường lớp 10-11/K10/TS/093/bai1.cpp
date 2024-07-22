
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,t,dem;
    cin>>n;
    t=0;
    dem=0;
    for(i=1;i<=1000000;i++)
    {
        if(i%2!=0)
        {
            t=t+i;
            {
                dem++;
            }
              if(dem==n)
                cout<<t;
        }

    }
   return 0;

}
