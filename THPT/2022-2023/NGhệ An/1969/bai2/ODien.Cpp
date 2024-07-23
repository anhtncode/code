#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,a[10005];
int main()
{
	freopen("odien.inp","r",stdin);
	freopen("odien.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	int check=a[n];
	a[0]=0;
	for(int i=n-1;i>=0;i--)
	{
		if(check>=m) 
		{
			cout<<n-(i+1)+1;
			return 0;
		}
		check=check-1+a[i];
	}
	cout<<-1;
}

