#include <bits/stdc++.h>

using namespace std;

int s(int x) {
    int kq=0;
    while (x>0) {
        kq += x % 10;
        x /= 10;
    }
    return kq;
}

#define task "CAU2"
int main() {
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    int n;
    cin >> n;
    cout << s(n);
}
