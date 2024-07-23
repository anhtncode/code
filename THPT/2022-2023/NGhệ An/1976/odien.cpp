#include<bits/stdc++.h>
using namespace std;
int m,n,a[1010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("odien.inp","r",stdin);
	freopen("odien.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	sort(a+1,a+1+n);
	int t=0, ans=0, kt=0;
	for(int i=n;i>=1;--i) {
		t+=a[i]; ++ans;
		if(t>=m) {
			kt=1;
			cout<<ans;
			break;
		}
		else --t;
	}
	if(kt==0) cout<<"-1";
}
