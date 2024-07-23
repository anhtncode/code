/**
darkemeralddd
**/
#include <bits/stdc++.h>
#define emerald "Daysodep"
#define l2 long long
#define memset(a,b) memset(a,b,sizeof(a))
using namespace std;
int n,k,a[200005],no[200005],ne[200005];
l2 so[200005],se[200005];
void s1() {
    for(int i=1; i<=n; i++) {
        so[i]=so[i-1]+((a[i]&1)?a[i]:0);
        se[i]=se[i-1]+((a[i]&1)?0:a[i]);

        no[i]=no[i-1]+(a[i]&1);
        ne[i]=ne[i-1]+(a[i]%2==0);
    }

    int kq=0;

    for(int i=1; i<n; i++) {
        for(int j=i+1; j<=n; j++) {
            l2 x=se[j]-se[i-1],y=so[j]-so[i-1];
            if(no[j]-no[i-1]>0&&ne[j]-ne[i-1]>0&&x-y>=0&&x-y<=k) {
                kq++;
            }
        }
    }

    cout<<kq;
}
multiset<l2,greater<l2>> mts;
void s2() {
    for(int i=1; i<=n; i++) {
        so[i]=so[i-1]+((a[i]&1)?a[i]:0);
        se[i]=se[i-1]+((a[i]&1)?0:a[i]);

        no[i]=no[i-1]+(a[i]&1);
        ne[i]=ne[i-1]+(a[i]%2==0);
    }

//    mts.insert(1);
//    mts.insert(2);
//    mts.insert(4);
//    mts.insert(5);
//
//    cout<<mts.size()-distance(mts.begin(),mts.lower_bound(4))<<endl;

    l2 kq=0;

    int j=0;

    for(int i=1; i<=n; i++) {
        while(j<=n&&no[i]-no[j]>0&&ne[i]-ne[j]>0) {
            mts.insert(se[j]-so[j]);
            j++;
        }

        l2 ld=se[i]-so[i]-k,lu=se[i]-so[i];

        multiset<l2,greater<l2>>::iterator it1=mts.lower_bound(lu);
        multiset<l2,greater<l2>>::iterator it2=mts.upper_bound(ld);

        int f1=mts.size()-distance(mts.begin(),it1),f2=mts.size()-distance(mts.begin(),it2);

        kq+=f1-f2;
    }

    cout<<kq;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen(emerald".Inp","r",stdin);
    freopen(emerald".Out","w",stdout);

    cin>>n>>k;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
    }

//    s1();
//    cout<<endl;
//    s2();

    if(n<=2000) s1();
    else s2();
}
