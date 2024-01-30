#include <iostream>
#include <iomanip>
using namespace std;
struct Ngay {
	int ngay, thang, nam;
};
void nhap(Ngay& x) {
	cin >> x.ngay >> x.thang >> x.nam;
}
bool namNhuan(int y) {
	if ((y % 400 == 0) || (y % 4 == 0 && y && 100 != 0))
		return 1;
	return 0;
}
bool ngayHopLe(Ngay& x) {
	if (x.nam < 1)
		return 0;
	if (x.thang < 1 || x.thang > 12)
		return 0;
	int a[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (namNhuan(x.nam))
		a[2] = 29;
	if (x.ngay<1 || x.ngay>a[x.thang])
		return 0;
	return 1;
}
void ngayKeTiep(Ngay& x) {
	x.ngay++;
	int a[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (namNhuan(x.nam))
		a[2] = 29;
	if (x.ngay > a[x.thang]) {
		x.ngay = 1;
		x.thang++;
		if (x.thang > 12) {
			x.thang = 1;
			x.nam++;
		}
	}
}
void xuat(Ngay& x) {
	cout << setfill('0') << setw(2) << x.ngay << "/"
		<< setfill('0') << setw(2) << x.thang << "/"
		<< x.nam;
}

int main() {
	Ngay x;
	nhap(x);
	if (ngayHopLe(x)) {
		cout << "Ngay hop le!" << endl;
		cout << "Ngay vua nhap la: ";
		xuat(x);
		cout << endl;
		cout << "Ngay ke tiep la: ";
		ngayKeTiep(x);
		xuat(x);
	}
	else cout << "Ngay khong hop le!" << endl;
	return 0;
}