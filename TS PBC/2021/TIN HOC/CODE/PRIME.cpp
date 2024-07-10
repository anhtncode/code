#include<bits/stdc++.h>
using namespace std;
bool uoc(long long n)
{
	if(n<2)	return 0;
	else
    {
		for(long long i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) return 0;
		}
		return 1;
	}
}
int main()
{
	freopen("prime.inp","r",stdin);
    freopen("prime.out","w",stdout);
   	 ios::sync_with_stdio(0);
    cin.tie(0);
  	cout.tie(0);
  	int dem=0;
        long long n;cin>>n;
		for(long long i=2;i<=sqrt(n);)
		{
			if(uoc(i))	dem++;
			if(i%2==1)	i+=2;
			else if(i%2==0)	i++;
		}
		cout<<dem;
	}
