#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main ()
{
    double x, p;
    cin >> x;
    p = -2*pow (x, 3) - 7*pow (x, 2) + 8;
    cout << "Gia tri bieu thuc p = " << fixed << setprecision (3) << (double)p;
    return 0;
}
// - Nhap x bat ki, p duoc tinh theo cong thuc -2*pow (x, 3) - 7*pow (x, 2) + 8
//  (ham pow tinh luy thua giua x va 3 (x^3), x va 2 (x^2))
// - Bieu thuc p sau khi tinh (phai ep kieu double de tinh duoc so thap phan) se co nhieu chu so thap phan 
// sau dau phay, nen dung setprecision(3) lam tron 3 chu so thap phan, neu ket qua in ra co so chu so thap phan 
// nho hon 3 thi phai dung fixed de co dinh 3 chu so thap phan bang cach them chu so 0 vao cuoi.
