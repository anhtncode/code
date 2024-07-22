#include<bits/stdc++.h>

using namespace std;

bool prime[100000001];

void sang(){
    for(int i = 0 ;i <= 100000000 ; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for(int i = 2 ; i <= sqrt(100000000) ; i++){

    if(prime[i] == true){
    for(int j = i*i ; j <= 100000000 ; j+=i) {
    prime[j] = false;
    }
    }
    }
}

int main(){
int a; cin >> a;
int c;
sang();
if(a % 2 == 0) {
    c = 1;
}
else {
    c = 2;
}
for(int i = c ; i <= 1000000000 ; i += 2){
    if (prime[a + i] == true){
        cout << i;
        break;
    }
}
}
