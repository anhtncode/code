//1974
#include<bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>
#define fi first
#define se second
#define FOR(i,l,r) for(int i=l;i<=r;i++)
#define FOD(i,l,r) for(int i=l;i>=r;i--)
using namespace std;
const ll N=2e5+5;
const ll MOD=1e9+7;
const ll oo=1e15+7;

ll n,ans=oo;
ii ct[N];
ll id[N],b[N];
bool check1=1,check2=1;

void check(){
	ll cnt=0,s=0;
	FOR(i,1,n)
		if(id[i]==1){
			s+=ct[i].se;
			cnt++;
		}
	FOR(i,1,n) if(id[i]==0){
		if(ct[i].fi>cnt) return;
		else cnt++;
	}
	ans=min(ans,s);
}

void gen(int i){
	if(i>n) {check(); return;}
	id[i]=0; gen(i+1);
	id[i]=1; gen(i+1);
}

void sub1(){
	gen(1);
	cout<<ans;
}

void sub2(){
	ans=0;
	FOR(i,1,n) b[i]=ct[i].se;
	sort(b+1,b+n+1);
	FOR(i,1,ct[1].fi) ans+=b[i];
	cout<<ans;
}

void sub3(){
	int r=n,cnt=0;
	ans=0;
	FOR(i,1,n){
		if(i>r) break;
		while(cnt<ct[i].fi){
			cnt++; ans+=ct[r].se;
			r--; if(i>r) break;
		}
		if(i>r) break;
		if(cnt>=ct[i].fi) cnt++;
	}
	cout<<ans;
}

int main(){
	if(fopen("KhoiNghiep.inp","r")){
		freopen("KhoiNghiep.inp","r",stdin);
		freopen("KhoiNghiep.out","w",stdout);
	}
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin>>n;
	FOR(i,1,n){
		cin>>ct[i].fi>>ct[i].se;
		if(i>=2){
			if(ct[i].fi!=ct[i-1].fi) check1=0;
			if(ct[i].se!=ct[i-1].se) check2=0;
		}
	}
	sort(ct+1,ct+n+1);
	if(n<=20) {sub1(); return 0;}
	if(check1==1) {sub2(); return 0;}
	if(check2==1) {sub3(); return 0;}
	return 0;
}
