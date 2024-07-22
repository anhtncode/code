#include<bits/stdc++.h>
using namespace std;

long long n,y,k,x;

int main()
{
	cin>>y>>k>>n;
	x=k*(y/k+1)-y;
	for(x;(x+y)<=n;x+=k) cout<<x<<" ";
	if(x==k*(y/k+1)-y) cout<<"-1";
	return 0;
}
