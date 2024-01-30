#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main() {
    float a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {
        cout << "Tam giac hop le!" << "\n";
        if (a == b && b == c && a == c) {
            cout << "Tam giac deu!";
        }
        else if (a == b || a == c || b == c) {
            cout << "Tam giac can!";
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Tam giac vuong!";
        }
        else cout << "Tam giac thuong!" << "\n";
        float chuvi = a + b + c;
        float p = chuvi / 2;
        float dientich = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << chuvi << "\n" << dientich;
    }
    else cout << "Tam giac khong hop le! Nhap lai 3 canh!";

    return 0;
}