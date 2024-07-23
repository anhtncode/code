#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
ll n,ans1,ans2;
pair<ll,ll>a[200005];
int main()
{
	freopen("KhoiNghiep.inp","r",stdin);
	freopen("KhoiNghiep.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i].fi>>a[i].se;
	}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		if(a[i].fi>=i){
			ans1+=a[i].se;
		}
	}
	for(ll i=1;i<=n;i++){
		swap(a[i].fi,a[i].se);
	}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		if(a[i].se>=i){
			ans2+=a[i].fi;
		}
	}
	cout<<min(ans1,ans2);
	return 0;
}
