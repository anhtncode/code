#include <bits/stdc++.h>
#define ll long long
#define N int(1000000)
using namespace std;
int f[N+5];
bool p[N+5];
void sangnt()
{
    memset(p,1,sizeof(p));
    p[0]=p[1]=0;
    for (int i=2;i*i<=N;i++)
        if (p[i]==1)
            for (int j=i*i;j<=N;j+=i)
                p[j]=0;
}
int main()
{
   freopen("SODB.INP","r",stdin);
   freopen("SODB.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sangnt();
   for(int i=1; i<=N; i++)
    {
         if (p[i]==0)
         {
             int d=2;
            for(int j=2; j*j<=i; j++)
            {
                if (i%j==0)
                {
                    d+=2;
                    if (j*j==i) d--;
                    if (d>4) break;
                }
            }
            if (d==4)
                f[i]=f[i-1]+1;
            else
                f[i]=f[i-1];
         }
         else
                f[i]=f[i-1];
    }

    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<f[r]-f[l-1]<<'\n';
    }
   return 0;
}
