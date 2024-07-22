
#include <bits/stdc++.h>
#define name "11/"
using namespace std;
long long n, b[1000001], L, R;
bool nt[1000001];
int snt,res;
void sangnt()
{
    nt[1]=true;
    for (int i=2;i<=1000000;i++)
        if (!nt[i])
            for (int j=i+i;j<=1000000;j+=i) nt[j]=true;
    for (int i=2;i<=1000000;i++)
        if (!nt[i]) b[++snt]=i;
}

void sub2()
{
    res=0;
    for (int i=1;i<=snt;i++)
    {
        long long m =b[i];
        for(int j=1;j<=40;j++)
        {
            m=m*b[i];
            if (m>R) break;
            if (m>=L && !nt[j+2])
                res++;
        }
    }
    cout<<res;
}
void sub1()
{
    res=0;
    for(int i=L; i<=R;i++)
    {
        int uoc=0;
        for (int j=1; j<=sqrt(i);j++)
        {
            if (i%j==0)
            {
                uoc++;
                if (i/j!=j) uoc++;
            }
        }
        if (!nt[uoc] && uoc>2) {
            res++;
        }
    }
    cout<<res<<'\n';
}


int main()
{

    sangnt();
    freopen("Bai3.inp","r",stdin);
    freopen("Bai3.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin>>L>>R;
    //sub1();
    sub2();

    return 0;
}
