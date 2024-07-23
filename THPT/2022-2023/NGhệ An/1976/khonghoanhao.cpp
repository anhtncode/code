#include<bits/stdc++.h>
using namespace std;
int a,b;
bool check(int x)
{
	int tu=1;
	for(int y=2; y<=sqrt(x); ++y) 
	if(x%y==0) tu=tu+y+x/y;
	if(sqrt(x)==trunc(sqrt(x))) tu=tu-sqrt(x);
	if(tu>x) return true;
	else return false;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("khonghoanhao.inp","r",stdin);
	freopen("khonghoanhao.out","w",stdout);
	cin>>a>>b;
	int ans=0;
	for(int i=a;i<=b;++i) if(check(i)==true) ++ans;
	cout<<ans;
}
