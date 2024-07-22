#include <bits/stdc++.h>

using namespace std;

#define task "CAU4"
int main() {
    if (fopen(task".inp","r")) {
        freopen(task".inp","r",stdin);
        freopen(task".out","w",stdout);
    }

    int m, n;
    cin >> m >> n;
    int ans=2*((n+1)/m);
    if ((n+1) % m ==0) --ans;
    cout << ans;
}
