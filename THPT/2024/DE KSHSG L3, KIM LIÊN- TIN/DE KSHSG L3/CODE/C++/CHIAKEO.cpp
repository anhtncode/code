#include <fstream>
using namespace std;

int main() {
    ifstream infile("CHIAKEO.INP");
    ofstream outfile("CHIAKEO.OUT");

    int n, m, mx = -1, p = -1;
    infile >> n >> m;

    for (int i = 1; i <= n; i++) {
        int x;
        infile >> x;
        int div = x / m + (x % m > 0);
        if (mx <= div) {
            mx = div;
            p = i;
        }
    }

    outfile << p;

    infile.close();
    outfile.close();
    return 0;
}

