#include <bits/stdc++.h>
using namespace std;

string s,t;
int n;

void open()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BP_Hong.inp","r",stdin);
    freopen("BP_Hong.out","w",stdout);
}

void green_flag()
{
    cin>>s>>t;
    int l = s.size(),r=t.size(),i=0,j=0;
    while(i<l)
    {
        while(s[i]!=t[j])
        {
            if(s[i-1]!=t[j])
            {
                cout<<"NO\n";
                return;
            }
            j++;
            if(j==r)
            {
                cout<<"NO\n";
                return;
            }
        }
        j++;
        i++;
    }
    for(j;j<r;j++)
    {
        if(s[i-1]!=t[j])
        {
            cout<<"NO\n";
                return;
        }
    }
    cout<<"YES\n";
}

int main()
{
    open();
    cin>>n;
    for(int i = 1;i<=n;i++)green_flag();

}
