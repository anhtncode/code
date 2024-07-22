#include <bits/stdc++.h>
using namespace std;
int cx[52], cs[52];
string w,s;
int i,m,n,kq=0;
bool kt()
{
    for (int i=0; i<52;i++)
     if(cs[i]!=cx[i]) return false;
   return true;
}
int main()
{
    freopen("XCHV.INP", "r", stdin);
    freopen("XCHV.OUT","w",stdout);
  cin>>m>>n;
  cin>>w>>s;
    for (i=0;i<52;i++) cx[i]=0;
  for (i=0;i<m;i++)
    if(w[i]>='A' && w[i]<='Z') cx[w[i]-'A']++;
  else
     cx[w[i]-'a'+26]++;
for (i=0;i<m;i++)
    if(s[i]>='A' && s[i]<='Z') cs[s[i]-'A']++;
  else
      cs[s[i]-'a'+26]++;
if (kt()) kq=1;
for(i=m; i<n; i++)
{
    if(s[i]>='A' && s[i]<='Z') cs[s[i]-'A']++;
  else
      cs[s[i]-'a'+26]++;
   if(s[i-m]>='A' && s[i-m]<='Z') cs[s[i-m]-'A']--;
  else
      cs[s[i-m]-'a'+26]--;
 if(kt()) kq++;
}
cout <<kq;
return 0;
}
