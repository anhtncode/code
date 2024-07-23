#include <bits/stdc++.h>
using namespace std;

int a[100005]; 

int main(){
	freopen("Daysodep.Inp","r",stdin);
	freopen("Daysodep.Out","w",stdout);
	int n,k,d=0,x=0,y=0;
	cin>>n>>k;
	for (int i=1;i<=n;i++) cin>>a[i];
	a[n+1]=-199999;
	vector<int> v;
	for (int i=1;i<=n;i++){
		if ( (a[i]%2==0 && a[i+1]%2!=0) || (a[i]%2!=0 && a[i+1]%2==0))  v.push_back(a[i]);
	}
	for (int i=0;i<v.size();i++){
		if (v[i]%2==0) x+=v[i];
		else y+=v[i];
	}
	int hieu=x-y;
	if (hieu>=0 && hieu<=k) d++;
	cout<<d;
	
	
	
}
