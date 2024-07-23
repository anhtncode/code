#include<bits/stdc++.h>
using namespace std;
long long m , n , a[100005] ,dem =1;

int main()
{
    freopen("ODien.INP","r",stdin);
    freopen("ODien.OUT","w",stdout);


    cin>>n;
    cin>>m;
    for(int i =1 ; i<=n ; i++)
    {
        cin>>a[i];

    }
    for(int i =1; i<=n;i++)
    {
        a[i]--;
         a[n]++;

        if(a[i]+a[i+1]==m)
        {
            dem++;
            cout<<dem;
            return 0;
        }
        cout<<-1;
        return 0;
    }
}
