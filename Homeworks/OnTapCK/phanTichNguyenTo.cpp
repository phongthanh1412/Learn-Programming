#include <iostream>
using namespace std;

bool la_so_nguyen_to(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void phan_tich_thua_so_nguyen_to(int n) {
    if (la_so_nguyen_to(n)) {
        cout << n << endl;
        return;
    }

    int last_prime = -1; // Biến để lưu giữ số nguyên tố trước đó
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            if (i != last_prime) { // Kiểm tra xem đã in số nguyên tố này hay chưa
                cout << i << " ";
                last_prime = i;
            }
            n /= i;
        }
    }
    if (n > 1 && n != last_prime) {
        cout << n << endl;
    }
}

int main() {
    int number;
    cout << "Nhap vao mot so nguyen duong: ";
    cin >> number;

    phan_tich_thua_so_nguyen_to(number);

    return 0;
}
