#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;string x;
ll dl=0,dc=0;

int main()
{
   freopen("DEMCAP.INP","r",stdin);
   freopen("DEMCAP.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   cin >> n;
   for (int i=1;i<=n;i++)
   {
       cin >> x;
       int k = x[x.size() - 1];
       if (k%2==0) dc++;
       else        dl++;
   }
   cout << dc*(dc-1)/2+dl*dc;
  return 0;
}
