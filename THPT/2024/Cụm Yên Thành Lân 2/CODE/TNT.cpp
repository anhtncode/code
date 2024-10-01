#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Hàm tính tổng bình phương các chữ số
int sum_of_squares_of_digits(long long num) {
    int square_sum = 0;
    while (num > 0) {
        int digit = num % 10;
        square_sum += digit * digit;
        num /= 10;
    }
    return square_sum;
}

// Hàm đếm số lượng số tổng nguyên tố
int count_prime_sums(const vector<long long>& A) {
    int count_total_prime_sum = 0;
    for (long long number : A) {
        int square_sum = sum_of_squares_of_digits(number);
        // Kiểm tra tính nguyên tố cho tổng bình phương
        if (is_prime(square_sum)) {
            count_total_prime_sum++;
        }
    }
    return count_total_prime_sum;
}

int main() {
    ifstream input("TNT.INP");
    ofstream output("TNT.OUT");

    int N;
    input >> N; // Đọc số lượng phần tử
    vector<long long> A(N);

    for (int i = 0; i < N; ++i) {
        input >> A[i]; // Đọc các giá trị
    }

    // Đếm số lượng số tổng nguyên tố
    int result = count_prime_sums(A);

    // Ghi kết quả ra file
    output << result << endl;

    input.close();
    output.close();

    return 0;
}
