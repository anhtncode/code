#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m;
 cin>>n>>m;
 map<int ,int >nongdan;
 for(int i=0;i<m;i++){
    int gia,soluong;
    cin>>gia>>soluong;
    nongdan[gia]+=soluong;
 }
 int tongtien=0;
 int trungcanh=n;
 for(auto it=nongdan.begin();it!=nongdan.end();it++){
    int gia1quatrung=it->first;
    int trungsanco=it->second;
    int sotrungmua=min(trungcanh,trungsanco);
    tongtien+=sotrungmua*gia1quatrung;
    trungcanh-=sotrungmua;
    if(trungcanh==0){
        break;
    }
 }
 cout<<tongtien<<endl;
 return 0;
}

