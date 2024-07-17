#include <bits/stdc++.h>
using namespace std;
string s="",t;
char k;
int m;
int giaima(string t,char k)
{
   for(int i=0; i<t.length(); i++)
        if(t[i]!=k) s+=t[i];

    if(s.length()%2==1) return 1;

    m = s.length()/2;

   for(int i=0; i<m; i++)
      if(s[i]!=s[i+m]) return 1;
   for(int i=t.length()-m; i<t.length(); i++)
    if(s[i-t.length()+m]!=t[i]) return 1;

    return 0;
}
int main()
{
   freopen("GIAIMA.INP","r",stdin);
   freopen("GIAIMA.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>t>>k;
    if(giaima(t,k)==1)
        cout<<-1;
    else
    for(int i=0; i<t.length()-m; i++)
       cout<<t[i];
}
