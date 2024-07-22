#include <bits/stdc++.h>

using namespace std;
bool ktsnt(int n)
{
    if(n<1)
    {
   return false;
    }
    for(int i=2;i<n;i++)
        if(n%i==0)
    {
         return false;

    }
    return true;
}

int main()
{
    int a,b,nn;
    b=LONG_MAX;
    cin>>a;
    for(int i=1;i<=1000000;i++)
    {
        if(ktsnt(i))
        {
            b=i;
            int nt=a+b;
            {
                if(ktsnt(nt))
                {
                     cout<<b;
                     break;
                }

            }
        }
    }




    return 0;
}
