#include    <bits/stdc++.h>
#define TASK "Thongke"

using   namespace   std;

long long n,a,dem[3000]={0};
string s;
int     main(){
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif

    cin>>n;
    getline(cin,s);
            long long i, ma=0;
            int mi=3000;
     for(i=1;i<=n;i++)
         {
            getline(cin,s);
            int l = s.length()-1;
            int a = 0;
            a=(s[l-3]-48)*1000+ (s[l-2]-48)*100+(s[l-1]-48)*10+(s[l]-48);
            dem[a]++;
            if (a<mi)    mi=a;
            if (a>ma)    ma=a;
         }
    long long mx,cs,d;
     i= mi; mx=0;
    while (i<= ma)
    {   d=0;
        while (dem[i]==0)
        {
            d=d+1;
            i=i+1;
        }
        if (d>mx) {mx=d;cs=i;}
        i=i+1;
    }
    if (mx>0){cout<<mx<<endl;
    cout<<cs-mx<<" "<<cs-1;}
    else cout<<-1;
    return 0;
}
