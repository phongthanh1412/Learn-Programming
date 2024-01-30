#include<iostream>
#include <math.h>
#define pi 3.14
using namespace std;
int main() {
    float r = 0;
    cin >> r;
    float d = 2 * r;
    float chuvi = 2 * pi * r;
    float dientich = pi * r * r;
    cout << d << "\n" << chuvi << "\n" << dientich;
    return 0;
}