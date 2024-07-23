/**
darkemeralddd
**/
#include <bits/stdc++.h>
#define emerald "KhoiNghiep"
#define l2 long long
#define memset(a,b) memset(a,b,sizeof(a))
#define st first
#define nd second
#define ii pair<int,int>
#define iii pair<ii,int>
#define bit(i,j) (((j)>>(i))&1)
using namespace std;
int n;
ii a[200005];
void s1() {
    sort(a+1,a+1+n);
    l2 mn=1e12;

    for(int i=0; i<(1<<n); i++) {
        l2 gifts=0,com=0;
        for(int j=0; j<n; j++) {
            if(bit(j,i)) {
                gifts+=a[j+1].nd;
                com++;
            }
        }

        bool check=1;

        for(int j=1; j<=n; j++) {
            if(!bit(j-1,i)) {
                if(a[j].st>com) {
                    check=0;
                    break;
                } else {
                    com++;
                }
            }
        }

        if(check) mn=min(mn,gifts);
    }

    cout<<mn;
}
void s2() {
    l2 gifts=0,need=a[1].st;

    sort(a+1,a+1+n,[](ii A,ii B){
        if(A.nd==B.nd) return A.st<B.st;
        return A.nd<B.nd;
    });

    for(int i=1; i<=need; i++) {
        gifts+=a[i].st;
    }

    cout<<gifts;
}
void s3() {
    l2 gifts=0,com=0;

    sort(a+1,a+1+n);

    int i=0,j=n+1;

    while(i+1<j) {
        if(com>=a[i+1].st) {
            com++;
            i++;
        } else {
            com++;
            gifts+=a[j-1].nd;
            j--;
        }
    }

    cout<<gifts;
}
iii qua[200005],cty[200005];
bool pass[200005];
void s4() {
    l2 gifts=0,com=0;
    for(int i=1; i<=n; i++) {
        cty[i]=qua[i]={a[i],i};
    }

    sort(cty+1,cty+1+n);
    sort(qua+1,qua+1+n,[](iii A,iii B){
        if(A.st.nd==B.st.nd) return A.st.st>B.st.st;
        return A.st.nd<B.st.nd;
    });

//    for(int i=1; i<=n; i++) {
//        cout<<qua[i].st.nd<<endl;
//    }

    for(int i=1; i<=n; i++) {
        if(qua[i].st.st==n) {
            pass[qua[i].nd]=1;
            com++;
            gifts+=qua[i].st.nd;
        }
    }

    int i=1,j=1;
    while(i<=n) {
        if(pass[cty[i].nd]) {
            i++;
            continue;
        }
        if(cty[i].st.st<=com) {
            com++;
            pass[cty[i].nd]=1;
            i++;
        } else {
//            cout<<j<<" "<<pass[qua[j].nd]<<endl;

            if(pass[qua[j].nd]) {
                j++;
                continue;
            }

//            cout<<qua[j].st.nd<<endl;
            com++;
            gifts+=qua[j].st.nd;
            pass[qua[j].nd]=1;
            j++;
        }
    }

    cout<<gifts;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen(emerald".Inp","r",stdin);
    freopen(emerald".Out","w",stdout);

    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>a[i].st>>a[i].nd;
    }

    bool cs2=1,cs3=1;

    for(int i=1; i<n; i++) {
        if(a[i].st!=a[i+1].st) cs2=0;
        if(a[i].nd!=a[i+1].nd) cs3=0;
    }

//    s4();
//    cout<<endl;
//    s1();

    if(n<=20) s1();
    else if(cs2) s2();
    else if(cs3) s3();
    else s4();
}
