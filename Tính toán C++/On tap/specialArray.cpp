#include<iostream>
#define max 30
using namespace std;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
bool chanLeLienTiep(int a[], int n) {
    for (int i = 1; i < n - 1; i++) {
        if (a[i] % 2 != 0 && a[i - 1] % 2 != 0 && a[i + 1] % 2 != 0)
            return 1;
        if (a[i] % 2 == 0 && a[i - 1] % 2 == 0 && a[i + 1] % 2 == 0)
            return 1;

    }
    return 0;
}
int tong(int a[], int n) {
    int sum = 0, sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < n; i++) {
        sum1 += a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 6) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] != 7)
                    sum2 += a[j];
                else break;
            }
            return sum1 - sum2 - 13;
        }
    }
    return sum1 - sum2 ;
}
int main() {
    int n = 0;
    int a[max];
    cin >> n;
    nhap(a, n);
    //cout << chanLeLienTiep(a, n);
    cout << tong(a, n);
    return 0;
}
