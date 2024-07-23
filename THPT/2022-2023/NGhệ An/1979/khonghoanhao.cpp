#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,ans;
bool tcs(ll x)
{
	ll s=-x;
	for (int i=1;i<=sqrt(x);i++)
	{
		if (x%i==0) 
		{
			if (i*i==x) s+=i;
			else
			{
				s+=i;
				s+=x/i;
			}
		}
		if (s>x) return true;
	}
	if (s>x) return true;
	return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("khonghoanhao.inp","r",stdin);
    freopen("khonghoanhao.out","w",stdout);
	cin>>a>>b;
    for (ll i=a;i<=b;i++)
    {
    	if (tcs(i)) ans++;
	}
	cout<<ans;
    return 0;
}

