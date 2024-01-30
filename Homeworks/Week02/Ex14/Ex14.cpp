#include <iostream>
#include <iomanip>
using namespace std;
bool kiemTraNamNhuan(int y) {
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        return 1;
    }
    return 0;
}
int soNgay(int& m, int& y) {

    switch (m) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
        return 31; break;
    }case 2: {
        if (kiemTraNamNhuan(y)) {
            return 29;
        }return 28;
    }
    case 4: case 6: case 9: case 11: {
        return 30;
    }

    }
}

int ngayKeTiep(int d, int m, int y) {
    int d1 = d; int m1 = m; int y1 = y;
    if (d > 0 && m > 0 && m < 13 && y > 0 && d <= (soNgay(m, y))) {
        cout << "Ngay hop le!\n";
        d1 = d + 1;
        if (m != 12 && d == soNgay(m, y)) {
            d1 = 1;
            m1 = m + 1;
        }
        else if (m == 12 && d == soNgay(m, y)) {
            d1 = 1;
            m1 = 1;
            y1 = y + 1;
        }
        else if (m == 2) {
            if (kiemTraNamNhuan(y)) {
                if (d == 29) {
                    d1 = 1;
                    m1 = m + 1;
                }
            }
            else {
                if (d == 28) {
                    d1 = 1; 
                    m1 = m + 1;
                }
            }
        }
    }
    else {
        cout << "Ngay khong hop le!";
        return 0;
    }
    cout << "Ngay hom sau la: ";
    if (d1 < 10) cout << "0" << d1 << "/";
    else cout << d1 << "/";
    if (m1 < 10) cout << "0" << m1 << "/";
    else cout << m1 << "/";
    cout << y1;
}
int main() {
    int d = 0, m = 0, y = 0;
    cin >> d >> m >> y;
    ngayKeTiep(d, m, y);

    return 0;
}