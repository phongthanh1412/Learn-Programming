#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh vo so nghiem!";
            }
            else cout << "Phuong trinh vo nghiem!";
        }
        else cout << "Phuong trinh co nghiem duy nhat: " << (float)-c / b;
    }
    else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem!";
        }
        else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep: " << (float)-b / (2 * a);
        }
        else {
            float x1 = (-b - sqrt(delta)) / 2 * a;
            float x2 = (-b + sqrt(delta)) / 2 * a;
            cout << "Phuong trinh co hai nghiem phan biet: " << x1 << " va " << x2;
        }
    }
    return 0;
}