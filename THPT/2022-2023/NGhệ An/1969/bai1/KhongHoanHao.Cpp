#include <bits/stdc++.h>
using namespace std;
int kt(int n)
{
    int s=1;
    int i,j;
    for(i=2;i*i<=n;i++)
    {
       if(n%i==0)
       {
           s+=i;
           j=n/i;
           if(i!=j) s+=j;
       }
    }
    if(n>=s) return 1;
    else return 0;
}
int main(int argc, char** argv) {
   ifstream fi;
   ofstream fo;
   fi.open("KhongHoanHao.Inp");
   fo.open("KhongHoanHao.Out");
   int l,r;
   fi>>l>>r;
   int i,cnt=0;
   for(i=l;i<=r;i++)
   {
       if(kt(i)==0) cnt++;
   }
   fo<<cnt;
   fi.close();
   fo.close();
	return 0;
}

