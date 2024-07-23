#include <bits/stdc++.h>
using namespace std;

int m,n;
int a[1000];

int main(){
	freopen("ODien.Inp","r",stdin);
	freopen("ODien.Out","w",stdout);
	cin>>n>>m;
	int ma=0;
	for (int i=1;i<=n;i++) {
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if (n==m){
		cout<<-1;
		return 0;
	}
	int d=0,s=0;
	for (int i=n;i>=1;i--){
		if (a[i]>a[i-1]) {
			d++;
			s+=(a[i]-1);
			if (s==m){
				cout<<d;
				return 0;
			}
		}
	}
	cout<<-1;		
}
