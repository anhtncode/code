#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
const int N=200000;
int n;
pair <int,int> a[N+10], b[N+10];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("khoinghiep.inp","r",stdin);
	freopen("khoinghiep.out","w",stdout);
	cin>>n;
	if(n<=20) {
		for(int i=1;i<=n;++i) {
			cin>>a[i].fi>>a[i].se;
			b[i].se=a[i].fi;
			b[i].fi=a[i].se;
		}
		sort(a+1,a+1+n);
		ll ans1=0, ans2=0;
		int d=0, kt=1;
		while(a[kt].fi==0) {
			++d;
			++kt;
		}
		for(int i=kt;i<=n;++i) {
			if(a[i].fi<=d) ++d;
			else {
				++d;
				ans1+=a[i].se;
			}
		}
		sort(b+1,b+1+n);
		d=0;
		for(int i=1;i<=n;++i) {
			if(b[i].se<=d) ++d;
			else {
				++d;
				ans2+=b[i].fi;
			}
		}
		cout<<min(ans1, ans2);
	}
	else {
		for(int i=1;i<=n;++i) cin>>a[i].fi>>a[i].se;
		sort(a+1,a+1+n);
		ll ans=0;
		int d=0, kt=1;
		while(a[kt].fi==0) {
			++d;
			++kt;
		}
		for(int i=kt;i<=n;++i) {
			if(a[i].fi<=d) ++d;
			else {
				++d;
				ans+=a[i].se;
			}
		}
		cout<<ans;
	}
}
