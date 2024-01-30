#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
struct Diem {
	float x;
	float y;
};
struct DoanThang {
	Diem A, B;
};
void nhap(DoanThang &d) {
	cout << "Nhap thong tin diem A: ";
	cin >> d.A.x >> d.A.y;
	cout << "Nhap thong tin diem B: ";
	cin >> d.B.x >> d.B.y;
}
void xuat(DoanThang& d) {
	cout << "Doan thang tao tu hai diem ";
	cout << "A(" << d.A.x << ";" << d.A.y << ")" << " va " << "B(" << d.B.x << ";" << d.B.y << ")" << endl;
}
float DoDai(DoanThang& d) {
	return (float)sqrt(pow(d.A.x - d.B.x, 2) + pow(d.A.y - d.B.y, 2));
}
int main() {
	DoanThang d;
	nhap(d);
	xuat(d);
	cout << "Do dai doan thang la " << DoDai(d) << endl;
	return 0;
}