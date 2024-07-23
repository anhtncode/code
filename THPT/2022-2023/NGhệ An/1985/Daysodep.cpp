#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k,a[200005],x,y,ans,d1,d2;
ll chan[200005],le[200005],tongchan[200005],tongle[200005];
int main()
{
	freopen("Daysodep.inp","r",stdin);
	freopen("Daysodep.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		chan[i]=chan[i-1]+(a[i]%2==0);
		le[i]=le[i-1]+(a[i]%2!=0);
	}
	for(ll i=1;i<=n;i++){
		if(a[i]%2==0){
			tongchan[i]=tongchan[i-1]+a[i];
		}
		else tongchan[i]=tongchan[i-1];
	}
	for(ll i=1;i<=n;i++){
		if(a[i]%2!=0){
			tongle[i]=tongle[i-1]+a[i];
		}
		else tongle[i]=tongle[i-1];
	}
	for(ll i=0;i<n-1;i++){
		for(ll j=i+2;j<=n;j++){
			{
				d1=chan[j]-chan[i];
				d2=le[j]-le[i];
				if(d1>0&&d2>0){
				x=tongchan[j]-tongchan[i];
				y=tongle[j]-tongle[i];
				if(x-y>=0&&x-y<=k)ans++;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
