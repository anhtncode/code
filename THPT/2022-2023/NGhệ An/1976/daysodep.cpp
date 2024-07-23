#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200000;
int n, k, a[N+10];
int dc[2010], dl[2010];
ll tc[2010], tl[2010];
map <int,int> cnt;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("daysodep.inp","r",stdin);
	freopen("daysodep.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;++i) cin>>a[i];
	if(n<=2000) {
		int ans=0;
		dc[0]=0; tc[0]=0; dl[0]=0; tl[0]=0;
		for(int i=1;i<=n;++i) {
			dc[i]=dc[i-1]; tc[i]=tc[i-1];
			dl[i]=dl[i-1]; tl[i]=tl[i-1];
			if(a[i]%2==0) {
				dc[i]=dc[i-1]+1;
				tc[i]=tc[i-1]+a[i];
			}
			else {
				dl[i]=dl[i-1]+1;
				tl[i]=tl[i-1]+a[i];
			}
		}
		for(int i=1;i<n;++i)
		for(int j=i+1;j<=n;++j) {
			if ( (dc[j]-dc[i-1]>0) && (dl[j]-dl[i-1]>0)
				&& ((tc[j]-tc[i-1])-(tl[j]-tl[i-1])>=0) && ((tc[j]+tc[i-1])-(tl[j]-tl[i-1])<=k) )
					++ans;
		}
		cout<<ans;
	}
	else {
		if(k==0) {
			for(int i=1;i<=n;++i) {
			if(a[i]%2==0) a[i]=a[i-1]+a[i];
			else a[i]=a[i-1]-a[i];
			}
			ll ans=0;
			cnt[0]=1;
			for(int i=1;i<=n;++i) {
				ans+=cnt[a[i]];
				cnt[a[i]]++;
			}
			cout<<ans;
		}
	}
}
