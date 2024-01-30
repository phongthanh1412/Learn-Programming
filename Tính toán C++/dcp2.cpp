#include <iostream>
using namespace std;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void solve(int a[], int b[], int n) {
    int p = 1;
    for (int i = 0; i < n; i++) {
        p *= a[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = p / a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int n = 0; cin >> n;
    int a[20];
    int b[20];
    nhap(a, n);
    solve(a, b, n);
    xuat(b, n);
    return 0;
}