#include<iostream>
#include<cstdlib>
#include<ctime>

bool sum_odd(int n) {
    int tmp = 0;
    while (n > 0) {
        int sodu = n % 10;
        tmp += sodu;
        n /= 10;
    }
    if (tmp % 2 != 0)
        return 1;
    return 0;
}

using namespace std;
int main() {
    int a[30];
    srand(time(0));
    int n = 7 + rand() % 16;
    int r = 0;
    cout << "So n sau khi phat sinh ngau nhien la: " << n << endl;
    for (int i = 1; i <= n; i++) {
        if (r < 6) {
            cout << "Nhap so thu " << i << ": ";
            cin >> a[i];
            while (a[i] < 30 || a[i] > 9000) {
                r++;
                if (r < 6) {
                    cout << "Ban da nhap sai " << r << " /5 lan " << endl;
                    cout << "Nhap lai so thu " << i << ": ";
                    cin >> a[i];
                }
                else break;
            }
        }
        else break;
    }
    int cnt = 0;
    if (r == 6)
        cout << "Ban da nhap sai 5/5 lan! Ket thuc chuong trinh!";
    else {
        for (int i = 1; i <= n; i++) {
            if (sum_odd(a[i]))
                cnt++;
        }
        cout << "So luong cac so co tong cac chu so la so le: " << cnt++;
    }
    return 0;
}
