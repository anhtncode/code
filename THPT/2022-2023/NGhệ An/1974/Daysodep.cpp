//1974
#include<bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define FOR(i,l,r) for(int i=l;i<=r;i++)
#define FOD(i,l,r) for(int i=l;i>=r;i--)
using namespace std;
const ll N=2e5+5;
const ll MOD=1e9+7;
const ll oo=1e9+7;

int n,k,ans=0;
ll a[N],b[N],c[N],odd[N],even[N];
map<ll,ll> cnt;

void sub12(){
	FOR(i,1,n)
		FOR(j,1,i){
			int temp=b[i]-b[j-1];
			if(even[i]-even[j-1]<=0 || odd[i]-odd[j-1]<=0) continue;
			if(0<=temp && temp<=k) ans++;
		}
	cout<<ans;
}

int bin(int l,int r,int x){
	int pos=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(c[mid]>=x) {pos=mid; r=mid-1;}
		else l=mid+1;
	}
}

void sub4(){
	cnt[b[0]]++;
	ans=0;
	FOR(i,1,n){
		FOR(j,b[i]-k,b[i]) ans+=cnt[j];
		cnt[b[i]]++;
	}
	
	FOR(i,1,n)
		if(a[i]%2==0) c[i]=c[i-1]+a[i];
		else c[i]=0;
	
	int l,r;
	FOR(i,1,n) if(c[i]>0){
		if(c[i-1]==0) {l=i-1; r=i-1;}
		else r++;
		int temp=bin(l,r,c[i]-k);
		if(temp!=-1) ans-=(i-temp);
	}
	
	cout<<ans;
}

int main(){
	if(fopen("Daysodep.inp","r")){
		freopen("Daysodep.inp","r",stdin);
		freopen("Daysodep.out","w",stdout);
	}
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin>>n>>k;
	FOR(i,1,n) cin>>a[i];
	
	FOR(i,1,n)
		if(a[i]%2==0){
			b[i]=b[i-1]+a[i];
			even[i]=even[i-1]+1;
			odd[i]=odd[i-1];
		}
		else{
			b[i]=b[i-1]-a[i];
			even[i]=even[i-1];
			odd[i]=odd[i-1]+1;
		}

	if(k>100) sub12();
	else sub4();
	return 0;
}
