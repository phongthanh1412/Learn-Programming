#include <iostream>
#include <cmath>
using namespace std;

struct TamGiac {
    float x1, y1; 
    float x2, y2; 
    float x3, y3; 
};

void nhap(TamGiac& tg) {
    cout << "Nhap toa do diem A: ";
    cin >> tg.x1 >> tg.y1;
    cout << "Nhap toa do diem B: ";
    cin >> tg.x2 >> tg.y2;
    cout << "Nhap toa do diem C: ";
    cin >> tg.x3 >> tg.y3;
}
float DoDai1(TamGiac tg) {
    return sqrt(pow(tg.x2 - tg.x1, 2) + pow(tg.y2 - tg.y1, 2));
}

float DoDai2(TamGiac tg) {
    return sqrt(pow(tg.x3 - tg.x2, 2) + pow(tg.y3 - tg.y2, 2));
}
float DoDai3(TamGiac tg) {
    return sqrt(pow(tg.x1 - tg.x3, 2) + pow(tg.y1 - tg.y3, 2));
}
bool kiemTraTamGiac(TamGiac tg) {
    float d1 = DoDai1(tg); 
    float d2 = DoDai2(tg); 
    float d3 = DoDai3(tg); 
    if (d1 + d2 > d3 || d1 + d3 > d2 || d2 + d3 > d1)
        return 1;
    return 0;
}

void loaiTamGiac(TamGiac tg) {
    float d1 = DoDai1(tg); 
    float d2 = DoDai2(tg); 
    float d3 = DoDai3(tg); 
    if (d1 == d2 && d2 == d3) { 
        cout << "Tam giac deu\n";
    }
    else if (d1 == d2 || d2 == d3 || d1 == d3) { 
        cout << "Tam giac can\n";
    }
    else if (pow(d1, 2) == pow(d2, 2) + pow(d3, 2) || 
        pow(d2, 2) == pow(d1, 2) + pow(d3, 2) ||
        pow(d3, 2) == pow(d1, 2) + pow(d2, 2)) {
        cout << "Tam giac vuong\n";
    }
    else { 
        cout << "Tam giac thuong\n";
    }
}

void chuVi(TamGiac tg) {
    float d1 = DoDai1(tg); 
    float d2 = DoDai2(tg); 
    float d3 = DoDai3(tg); 
    float p = d1 + d2 + d3; 
    cout << "Chu vi tam giac la: " << p << endl;
}

void dienTich(TamGiac tg) {
    float d1 = DoDai1(tg); 
    float d2 = DoDai2(tg); 
    float d3 = DoDai3(tg); 
    float p = (d1 + d2 + d3) / 2; 
    float s = sqrt(p * (p - d1) * (p - d2) * (p - d3)); 
    cout << "Dien tich tam giac la: " << s << endl;
}


int main() {
    TamGiac tg; 
    nhap(tg); 
    if (kiemTraTamGiac(tg)) {
        cout << "Ba diem vua nhap tao thanh mot tam giac hop le!\n";
        loaiTamGiac(tg); 
        chuVi(tg); 
        dienTich(tg); 
    }
    else {
        cout << "Ba diem vua nhap khong tao thanh mot tam giac hop le!\n";
    }
    return 0;
}


