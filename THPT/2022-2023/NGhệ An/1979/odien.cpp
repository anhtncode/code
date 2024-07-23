#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1004],n,m,ans;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("odien.inp","r",stdin);
    freopen("odien.out","w",stdout);
	cin>>n>>m;
    for (ll i=1;i<=n;i++)
    	cin>>a[i];
    sort(a+1,a+1+n);
    ll s=a[1];
    for (int i=2;i<=n;i++)
    {
        s+=a[i]-1;
    }
    if (s<m) {cout<<-1;return 0;}
    for (ll i=n;i>=1;i--)
    {
    	if (m<=a[i])
    	{
    		m-=a[i];
    		ans++;
    		break;
		}
		else
		{
			m-=(a[i]-1);
			ans++;
		}
	}
	cout<<ans;
    return 0;
}

