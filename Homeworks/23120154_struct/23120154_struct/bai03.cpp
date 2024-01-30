#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
struct Diem {
	float x, y;
};

void nhap(Diem &A, Diem &B, Diem &C) {
	cin >> A.x >> A.y;
	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
}
float doDai(Diem X, Diem Y) {
	float d = sqrt(pow(X.x - Y.x, 2) + pow(X.y - Y.y, 2));
	return d;
}
float chuVi(Diem A, Diem B, Diem C) {
	float  p = doDai(A, B) + doDai(A, C) + doDai(C, B);
	return p;
}
float dienTich(Diem A, Diem B, Diem C) {
	float p = (float) chuVi(A, B, C) / 2;
	float s = sqrt(p * (p - doDai(A, B)) * (p - doDai(A, C)) * (p - doDai(B, C)));
	return s;
}
Diem trongTam(Diem A, Diem B, Diem C) {
	Diem G;
	G.x = (A.x + B.x + C.x) / 3;
	G.y = (A.y + B.y + C.y) / 3;
	return G;

}
int main() {
	Diem A, B, C;
	nhap(A, B, C);
	cout << chuVi(A, B, C) << endl;
	cout << dienTich(A, B, C) << endl;
	Diem G = trongTam(A, B, C);
	cout << G.x << " " << G.y;
	return 0;
}