#include <iostream>
#include <math.h>
using namespace std;
struct Diem {
	float x;
	float y;
};
void nhap(Diem &A, Diem &B) {
	cout << "Nhap toa do diem A: ";
	cin >> A.x >> A.y;
	cout << "Nhap toa do diem B: ";
	cin >> B.x >> B.y;
}
void xuat(Diem A, Diem B) {
	cout << "Toa do diem A la ";
	cout << "(" << A.x << ";" << A.y << ")" << endl;
	cout << "Toa do diem B la ";
	cout << "(" << B.x << ";" << B.y << ")" << endl;
}
float khoangCach(Diem A, Diem B) {
	return (float)sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
int main() {
	Diem A, B;
	nhap(A, B);
	xuat(A, B);
	cout << "Khoang cach giua A va B la: " << khoangCach(A, B);
	return 0;
}