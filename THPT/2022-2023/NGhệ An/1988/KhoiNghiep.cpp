#include<bits/stdc++.h>
using namespace std;
long long n,i,d,c,g,minb[200009],kq,e,dd[200009],l,tam;
pair<long long,long long> a[200009];
set<int> s;
int main(){
    freopen("KhoiNgiep.Inp","r",stdin);
    freopen("KhoiNgiep.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i].first>>a[i].second;
        s.insert(i);
    }
    sort(a+1,a+1+n);
    minb[n]=a[n].second;
    for(i=n-1;i>0;i--)
        minb[i]=min(minb[i+1],a[i].second);
    for(i=1;i<=n;i++)
        if(e>=a[i].first)
    {
        e++;
        s.erase(i);
    }
        else
    {
            d=i; c=n;
            tam=minb[i];
            l=0;
            while(d<=c)
            {
                g=(d+c)/2;
                if(minb[g]>=tam)
                {
                    l=g;
                    c=g-1;
                }
                else d=g+1;
            }
            if(s.lower_bound(l)!=s.end())
            {
                long long h=*s.lower_bound(l);
                kq+=a[h].second;
                s.erase(h);
                e++;
            }
    }
    cout<<kq;
}
