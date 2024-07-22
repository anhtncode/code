#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c;
   long long ln=LONG_MIN;
   cin>>a>>b>>c;
   if(a*b>ln)
       ln=a*b;
       {
           if(a*c>ln)
            ln=a*c;
           {
               if(b*c>ln)
                ln=b*c;
           }
       }
       cout<<ln;
    return 0;
}
