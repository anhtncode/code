#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[1005],s[1005];
int main()
{
	freopen("ODien.inp","r",stdin);
	freopen("ODien.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<ll>());
	s[0]=1;
	for(ll i=1;i<=n;i++){
		s[i]=s[i-1]-1+a[i];
		if(s[i]>=m){
			cout<<i;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
