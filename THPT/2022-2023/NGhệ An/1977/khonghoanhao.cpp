#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b;
int main()
{
	freopen("khonghoanhao.inp","r",stdin);
	freopen("khonghoanhao.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>a>>b;
	ll dem=0;
	for(ll i=a;i<=b;i++)
	{
		ll ans=1;
		for(ll j=2;j<=sqrt(i);j++)
		{
			if(i%j==0) 
			{
				ans+=j;
				if(i/j!=j) ans+=i/j;
			}
		}
		if(ans>i) dem++;
	}
	cout<<dem;
}

