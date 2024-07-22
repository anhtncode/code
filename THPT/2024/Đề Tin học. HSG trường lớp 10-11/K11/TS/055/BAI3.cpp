#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
if(b == 0) return a;
return gcd(b,a % b);
}
int lonnhat(int a[],int n){
    int res;
    res = a[0];
    for(int i = 1 ; i < n ; i++){
        if(res < a[i]) res = a[i];
    }
    return res;
}

int main(){
int n; cin >> n;
int arr[n+1];
int arr1[n];
int dem = 0;
for(int i = 0 ; i < n ; i++) cin >> arr[i];
for(int i = 0 ; i < n - 1 ; i++){
    arr1[dem] = gcd(arr[i],arr[i+1]);
    dem++;
}
cout << lonnhat(arr1,dem);
}

