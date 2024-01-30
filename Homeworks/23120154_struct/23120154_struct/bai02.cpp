#include<iostream>
#include<string>
using namespace std;
struct Ngay {
	int d, m, y;
};
void nhap(Ngay& ngay) {
	char c;
	cin >> ngay.d >> c >> ngay.m >> c >> ngay.y;
}
bool check(Ngay ngay) {
	if ((ngay.y % 4 == 0 && ngay.y % 100 != 0) || (ngay.y % 400 == 0))
		return 1;
	return 0;
}
int main() {
	Ngay ngay;
	nhap(ngay);
	if (check(ngay))
		cout << ngay.y << " la nam nhuan";
	else cout << ngay.y << " khong la nam nhuan";
	return 0;
}