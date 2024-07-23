#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[200005],c[200005],l[200005],soc[200005],sol[200005];
map <ll,ll> d;
void sub3()
{
	for(ll i=1;i<=n;i++) 
	{
		cin>>a[i];
		if(a[i]%2==0) a[i]=a[i-1]+a[i];
		else a[i]=a[i-1]-a[i];
	}
	d[0]=1;
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		ans+=d[a[i]];
		d[a[i]]++;
	}
	cout<<ans;
	
}
bool kt(ll i,ll j)
{
	ll x=c[j]-c[i-1]-(l[j]-l[i-1]);
	ll d1=soc[j]-soc[i-1];
	ll d2=sol[j]-sol[i-1];
	if(x>=0&&x<=k)
	{
		if(d1>0&&d2>0) return true;	
	}
	return false;
}
int main()
{
	freopen("daysodep.inp","r",stdin);
	freopen("daysodep.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>k;
	if(k==0)
	{
		sub3();
		return 0;
	}
	for(ll i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0) 
		{
			c[i]=c[i-1]+a[i];
			l[i]=l[i-1];
			soc[i]=soc[i-1]+1;
			sol[i]=sol[i-1];
		}
		else
		{
			c[i]=c[i-1];
			l[i]=l[i-1]+a[i];
			soc[i]=soc[i-1];
			sol[i]=sol[i-1]+1;
		}
	}
	ll ans=0;
	for(ll i=1;i<=n-1;i++)
	{
		for(ll j=i+1;j<=n;j++)
		{
			if(kt(i,j)) ans++;
		}
	}
	cout<<ans;
}

