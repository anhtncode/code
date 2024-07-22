#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string S;
    cin>>S;
    int max_length=0;
    int batdau=0;
    for(int i=0;i<=n;i++){
        int count[26]={0};
        int length=0;
        for(int j=i;j<n;j++){
        count[S[i]-'a']++;
        if(count[S[j]-'a']<=k){
        length++;
        }
        else{break;}
            if(length > max_length){}
            max_length=length;
            batdau=1;
        }
    }
    cout<<max_length<<" "<<batdau+1<<endl;
return 0;
}
