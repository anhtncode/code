 #include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t, n, x, d;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("DEMSO0.inp","r",stdin);
    freopen("DEMSO0.out","w",stdout);
    cin>>t;
    while (t--)
    {
        cin>>n;
    	d=0, x=5;
    	while (x <= n)
    	{
    		d += n/x;
    		x *= 5;
    	}
    	cout<<d<<endl;
    }
	return 0;
}
