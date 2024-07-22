#include <bits/stdc++.h>

using namespace std;

int isPrime(int x) {
    if (x<2) return 0;
    for(int i=2;i*i<=x;++i)
        if (x % i == 0) return 0;
    return 1;
}

#define task "CAU3"
int main() {
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }

    int n;
    cin >> n;
    while (!isPrime(n)) ++n;
    cout << n;
}
