#include <bits/stdc++.h>
#define smax 10001
#define N 10001
#define inf int(1e9)
using namespace std;
long long F[smax];
long long d[N];
long long n,s,J;
int main()
{
   freopen("ATM.inp","r",stdin);
   freopen("ATM.out","w",stdout);
    cin>>n>>s;
    for (int i=1; i<=n; i++) cin>>d[i];
     fill(F+1,F+s+1,inf);
    F[0]=0;
     for(int i=1; i<=n; i++)

    for (int j=d[i];j<=s;j++)

     if (F[j]>F[j-d[i]]+1)
        {
        F[j]=F[j-d[i]]+1;
               }
cout<<F[s]<<endl;

        return 0;
    }
