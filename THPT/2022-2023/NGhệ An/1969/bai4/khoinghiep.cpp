#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
pair<ll,ll> a[200005];
void sub1()
{
	sort(a+1,a+1+n);
	ll ct=0,ans=0;
	for(ll i=1;i<=n;i++)
	{
		if(a[i].first==-1) continue;
		if(ct<a[i].first) 
		{
			ll mn=INT_MAX,vt;
			for(ll j=i;j<=n;j++) 
			{
				if(a[j].first==-1) continue;
				if(mn>a[j].second)
				{
					mn=a[j].second;
					vt=j;
				}
			}
			ans+=mn;
			ct++;
			a[vt].first=-1;
			i--;
		}
		else ct++;
	}
	cout<<ans;
}
void sub2()
{
	ll ans=0;
	for(ll i=1;i<=n;i++) swap(a[i].first,a[i].second);
	sort(a+1,a+1+n);
	for(ll i=1;i<=n;i++) swap(a[i].first,a[i].second);
//	for(ll i=1;i<=n;i++) cout<<a[i].first<<" "<<a[i].second<<"\n";
	if(a[1].first==0) cout<<0;
	else
	{
		for(ll i=1;i<=a[1].first;i++) ans+=a[i].second;
		cout<<ans;
	}
}
void sub3()
{
	ll ans=0;
	sort(a+1,a+1+n);
	ll ct=0;
	for(ll i=1;i<=n;i++)
	{
		if(ct<a[i].first) ans+=a[i].second;
		ct++;
	}
	cout<<ans;
}
int main()
{
	freopen("khoinghiep.inp","r",stdin);
	freopen("khoinghiep.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++) cin>>a[i].first>>a[i].second;
	ll x=a[1].first;
	bool kt=true;
	for(ll i=2;i<=n;i++) 
	{
		if(a[i].first!=x) 
		{
			kt=false;
			break;	
		}
	}
	if(kt){ sub2();return 0;}
	x=a[1].second;
	kt=true;
	for(ll i=2;i<=n;i++) 
	{
		if(a[i].second!=x) 
		{
			kt=false;
			break;	
		}
	}
	if(kt){ sub3();return 0;}
	sub1();return 0;
}

