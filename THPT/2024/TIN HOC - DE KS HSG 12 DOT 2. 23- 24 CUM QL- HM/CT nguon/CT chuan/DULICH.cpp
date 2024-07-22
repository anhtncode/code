#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n,k,c[N];
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("DULICH.INP","r",stdin);
    freopen("DULICH.OUT","w",stdout);
    cin>>n>>k;
    cin>>s;
    s = ' ' + s;
    for(int i=1;i<=n;i++)
        if(s[i]=='0')
         c[i] = c[i-1] + 1;
        else
         c[i] = c[i-1];
    int kq = n;
    for (int i=1;i<=n;i++)
    if(s[i] == '0')
    {
        int l = 0,r = n;
        while(l <= r)
        {
            int mid = (l + r)/2;
            if(c[min(n,i+mid)] - c[max(0,i-mid-1)] >= k+1)
            {
                kq = min(kq,mid);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
    }
    cout<<kq;
}

