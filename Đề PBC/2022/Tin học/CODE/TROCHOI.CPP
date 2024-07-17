#include    <bits/stdc++.h>
using   namespace   std;
long long m,n,x,y;
long long  bcnn(long long a, long long b)
{
return (a/__gcd(a,b)*b);
}
int     main()
{
	freopen("TROCHOI.INP","r",stdin);
    freopen("TROCHOI.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	cin>>m>>n>>x>>y;
	cout<<(n/bcnn(x,y))-((m-1)/bcnn(x,y))<<'\n';
	return 0;
}
