#include <fstream>

int sum_of_divisors(int x) {
    int sum = 0;
    for (int i = 2; i <= x / 2; ++i) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum;
}

bool kt_ae(int m, int n) {
    int sx = sum_of_divisors(m);
    int sy = sum_of_divisors(n);
    return (sx == sy && sx > 0);
}

int main() {
    std::ifstream f1("ANHEM.INP");
    std::ofstream f2("ANHEM.OUT");
    int m, n;
    f1 >> m >> n;
    if (kt_ae(m, n)) {
        f2 << "YES\n";
    } else {
        f2 << "NO\n";
    }
    return 0;
}
