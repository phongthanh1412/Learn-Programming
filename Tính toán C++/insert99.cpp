#include <iostream>
using namespace std;
// Nhập mảng ban đầu
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
// void kiemTra (int a[], int b[], int n, int m)
int main() {
    int a[100]; // Mảng ban đầu
    int n = 0; 
    cin >> n;
    nhap (a, n);
    int b[100]; // Mảng tạm thời để lưu kết quả
    int m = 0; // Kích thước của mảng kết quả

    for (int i = 0; i < n; i++) {
        b[m++] = a[i]; // Sao chép phần tử ban đầu vào mảng kết quả
        // Kiểm tra nếu phần tử hiện tại nhỏ hơn các phần tử xung quanh nó
        if (i > 0 && a[i] < a[i-1] && a[i] < a[i+1]) {
            b[m++] = 99; // Chèn số 99 vào phía sau phần tử nhỏ hơn
        }
    }
    // In ra mảng kết quả
    xuat (b, m);
    return 0;
}