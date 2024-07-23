#include<bits/stdc++.h>
using namespace std;
int main()
{ freopen("Daysodep.inp","r",stdin);
  freopen("Daysodep.out","w",stdout);
  int n,k;
  cin>>n>>k;
  int a,dem=0,chan[n+1],le[n+1],x[n+1],y[n+1],t;
  chan[0]=0; le[0]=0; y[0]=0,x[0]=0;
  for(int i=1;i<=n;++i)
  {
      cin>>a;
      if(a%2==0) {x[i]=x[i-1]+a;chan[i]=chan[i-1]+1; y[i]=y[i-1];le[i]=le[i-1];}
      else {y[i]=y[i-1]+a; le[i]=le[i-1]+1;x[i]=x[i-1];chan[i]=chan[i-1]; }
      for(int j=0;j<=i;++j)
      {t=x[i]-x[j]-y[i]+y[j];
          if((t>=0)&&(t<=k)&&(chan[i]-chan[j]>0)&&(le[i]-le[j]>0)) {dem++;}
      }
      }
      cout<<dem;
      return 0;
  }
