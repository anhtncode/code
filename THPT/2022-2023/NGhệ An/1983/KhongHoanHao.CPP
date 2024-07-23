/**
darkemeralddd
**/
#include <bits/stdc++.h>
#define emerald "KhongHoanHao"
#define l2 long long
#define memset(a,b) memset(a,b,sizeof(a))
using namespace std;
int a,b,pr[100005];
void es() {
    memset(pr,0);
    for(int i=1; i<=100000; i++)
        for(int j=2*i; j<=100000; j+=i)
            pr[j]+=i;
}
int tu(int k) {
    int t=0;

    for(int i=1; i<=sqrt(k); i++) {
        if(k%i==0) {
            t+=i;
            if(i!=k/i) t+=k/i;
        }
    }

    return t-k;
}
void s1() {
    int kq=0;

    for(int i=a; i<=b; i++) {
        if(tu(i)>i) kq++;
    }

    cout<<kq;
}
void s2() {
    es();

    int kq=0;

    for(int i=a; i<=b; i++) {
        if(pr[i]>i) kq++;
    }

    cout<<kq;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen(emerald".Inp","r",stdin);
    freopen(emerald".Out","w",stdout);

    cin>>a>>b;

//    s1();
//    cout<<endl;
//    s2();

    if(b<=1000) s1();
    else s2();
}
