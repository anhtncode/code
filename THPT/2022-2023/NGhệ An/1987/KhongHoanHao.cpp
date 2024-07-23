#include <bits/stdc++.h>
using namespace std;

bool kt(int x){
	int s=0;
    for (int i=1;i<x;i++){
    	if (x%i==0){
    		s+=i;
		}
	}
	if (s>x) return true;
	return false;
}

int main(){
	freopen("KhongHoanHao.Inp","r",stdin);
	freopen("KhongHoanHao.Out","w",stdout);
	int a,b;
	long long d=0;
	cin>>a>>b;
	for (int i=a;i<=b;i++){
		if (kt(i)) d++;
	}
	cout<<d;
}
	
	
	
	

