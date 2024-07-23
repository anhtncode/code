#include<bits/stdc++.h>
using namespace std;
bool   tinh  (long long x)
{
  long long tong=0;
  for(int i=1;i<=sqrt(x);i++)
       if(x%i==0)
            {
            tong=tong+i;
            if(x/i!=i)    tong=tong+x/i;
            }
  if(tong-x>x)    return true;
  else            return false;
}
int main()
{
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      freopen("KhongHoanHao.Inp","r",stdin);freopen("KhongHoanHao.Out","w",stdout);
      long long a,b,kq=0;
      cin>>a>>b;
      for(int i=a;i<=b;i++)
         {
             if(tinh(i))   kq++;
         }
       cout<<kq;
}
