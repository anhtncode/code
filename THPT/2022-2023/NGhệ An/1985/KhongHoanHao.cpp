#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,ans;
bool kt(ll x)
{
	ll s=1;
	for(ll i=2;i<=sqrt(x);i++){
		if(x%i==0){
			s+=i;
			if(i*i!=x)s+=x/i;
		}
	}
	if(s>x)return true;
	return false;
}
int main()
{
	freopen("KhongHoanHao.inp","r",stdin);
	freopen("KhongHoanHao.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>a>>b;
	for(ll i=a;i<=b;i++){
		if(kt(i))ans++;
	}
	cout<<ans;
	return 0;
}
