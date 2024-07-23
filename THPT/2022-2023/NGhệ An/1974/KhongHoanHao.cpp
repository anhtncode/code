//1974
#include<bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first 
#define se second
#define FOR(i,l,r) for(int i=l;i<=r;i++)
#define FOD(i,l,r) for(int i=l;i>=r;i--)
using namespace std;
const ll N=1e6+5;
const ll MOD=1e9+7;
const ll oo=1e9+7;

ll a,b,ans=0;

int main(){
	if(fopen("KhongHoanHao.inp","r")){
		freopen("KhongHoanHao.inp","r",stdin);
		freopen("KhongHoanHao.out","w",stdout);
	}
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin>>a>>b;
	FOR(i,a,b){
		ll s=1;
		FOR(j,2,sqrt(i)){
			if(i%j==0){
				s+=j;
				if(j*j!=i) s+=i/j;
			}
		}
		if(s>i) ans++;
	}
	
	cout<<ans;
	return 0;
}
