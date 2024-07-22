#include<bits/stdc++.h>

using namespace std;

long long kiemtra(int d, int e, int f){
    if(max(d,e) != max (e,f))
    return max(d,e) * max(e,f);
    else return max(d,e) * max(d,f);
}

int main(){
    int a, b , c;
    cin >> a >> b >> c;
    cout << kiemtra(a,b,c);
}
