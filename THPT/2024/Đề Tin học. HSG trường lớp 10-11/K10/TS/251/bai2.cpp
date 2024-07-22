#include <bits/stdc++.h>

using namespace std;
long long a[4];
int main()
{
    for(long long i=1;i<=3;i++)
        cin>>a[i];
    sort(a,a+3+1);
    long long s=a[2]*a[3];
    cout<<s;
    return 0;
}
