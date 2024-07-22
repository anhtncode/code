#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define fd(i,a,b) for(int i=(a);i>=(b);--i)
#define rep(i,a,b)  for(int i=(a);i<(b);++i)
#define fi  first
#define se  second
#define pb  push_back
using   namespace   std;
int n,m,w[1100],v[1100],f[1100][100100];
///--------------------------
void readf()
{
    cin>>n>>m;
    fo(i,1,n) cin>>w[i]>>v[i];
}
///--------------------------
void solve()
{
	f[0][0];
	fo(i,1,n)
	fo(j,0,m)
	{
	    f[i][j]=f[i-1][j];
	    if (j>0) f[i][j]=max(f[i][j],f[i][j-1]);
	    if (j-w[i]>=0) f[i][j]=max(f[i][j],f[i-1][j-w[i]]+v[i]);
	}
	cout<<f[n][m];
}
///--------------------------
int main()
{
   
       freopen("CHONQUA.inp", "r", stdin);
       freopen("CHONQUA.out", "w", stdout);

   readf();
   solve();
}

