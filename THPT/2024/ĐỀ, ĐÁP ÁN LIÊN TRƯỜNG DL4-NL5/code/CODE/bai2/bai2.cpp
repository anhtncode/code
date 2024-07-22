
#include<bits/stdc++.h>
#define na "8/"
using namespace std;
int n,k,a[100001], c[100001];
bool b[100001];
void c1()
{
    long long res =0;
    int t =0;
    for (int i=1;i<=n;i++)
    {
        if (a[i]>0)
        {
            res+=a[i];
            t = a[i];
            a[i]=0;
            for (int j=i+1;j<=n;j++)
                if (a[j]>0 && a[j]<=t-k)
                {
                    t=a[j];a[j]=0;
                }
        }
    }
    cout<<res<<'\n';
}
int tknp(int d, int c, int v)
{
    int r=0;
    while (d<=c)
    {
        int m = (d+c)/2;
        if (a[m]<=v-k)
        {
            r = m;
            c = m-1;
        } else d = m+1;
    }
    return r;
}
void c2()
{
    long long res=0;
    for (int i=1;i<=n;i++)
    {
        if (!b[i])
        {
            res+=a[i];
            int r =i;
            int m= a[i];
            while (true)
            {
                r = tknp(r+1,n,m);
                if (r>0)
                {
                    while (r<=n && b[r]) r++;
                    m = a[r];
                    b[r]=true;
                    if (r>n) break;
                }
                else break;
            }
        }
    }
    cout<<res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    cin>>n>>k;
    for (int i=1;i<=n;i++) {cin>>a[i];c[i]=a[i];}
    sort(a+1,a+n+1,greater<int>());
    //c1();
    c2();

}
