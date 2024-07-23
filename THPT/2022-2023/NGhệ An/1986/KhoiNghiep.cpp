#include<bits/stdc++.h>
using namespace std;
int main()
{ freopen("KhoiNghiep.inp","r",stdin);
  freopen("KhoiNghiep.out","w",stdout);
  int n;
  cin>>n;
  set<pair<int,int>> a,b,r;
  int x,y,cp=0,k=0,d,t=0;
  for(int i=1;i<=n;++i)
  {
      cin>>x>>y;
      a.insert({x,y});
      b.insert({y,x});
  }
  for(auto x:a)
  {
      if(x.first<=t) {t=t+1; b.erase({x.second,x.first});}
      else {k=0;d=x.first-t;
      if(b.size()>=d){
      for(auto q:b)
        {  if (d==0) break;
            k=q.first+k;
            r.insert({q.first,q.second}); d--;
      }
        if (k<x.second) {cp=cp+k;
        for(auto e:r)
        {
            a.erase({e.second,e.first});
            b.erase({e.first,e.second});
        }
        t=x.first+1;
 r.clear();
  } else {cp=cp+x.second; t=t+1;b.erase({x.second,x.first}); }
  } else {cp=cp+x.second; t=t+1;b.erase({x.second,x.first}); }}}
  cout<<cp;
  return 0;
  }
