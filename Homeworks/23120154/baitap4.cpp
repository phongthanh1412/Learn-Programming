#include <bits/stdc++.h>
#define pi 3.14
using namespace std;
int main () {
    double r, chuVi, dienTich;
    cin >> r;
    chuVi = 2*pi*r;
    dienTich = pi*pow (r, 2);
    cout << "Chu vi hinh tron la: " << (double) chuVi << endl;
    cout << "Dien tich hinh tron la: " << (double) dienTich;
    return 0;
}