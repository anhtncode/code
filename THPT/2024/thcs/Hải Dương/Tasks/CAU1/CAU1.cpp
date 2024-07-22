#include <bits/stdc++.h>

using namespace std;

#define task "CAU1"
int main() {
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }
    int a, b;
    cin >> a >> b;
    if (a>b) cout << a; else cout << b;
}
