//1974
#include<bits/stdc++.h>
#define ll long long
#define ii pair<int,int>
#define fi first
#define se second
#define FOR(i,l,r) for(int i=l;i<=r;i++)
#define FOD(i,l,r) for(int i=l;i>=r;i--)
using namespace std;
const ll N=1e3+5;
const ll MOD=1e9+7;
const ll oo=1e9+7;

int n,m;
int a[N];

int main(){
	if(fopen("ODien.inp","r")){
		freopen("ODien.inp","r",stdin);
		freopen("ODien.out","w",stdout);
	}
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin>>n>>m;
	FOR(i,1,n) cin>>a[i];
	
	sort(a+1,a+n+1,greater<int>());
	int temp=a[1],pos=1;
	while(temp<m){
		pos++; 
		if(pos>n) {cout<<-1; return 0;}
		temp=temp-1+a[pos];
	}
	
	cout<<pos;
	return 0;
}
