#include <iostream>
using namespace std;
void draw1(int w, int h) {

	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void draw2(int w, int h) {

	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++) {
			if (i == 1 || i == w || j == 1 || j == h)
				cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}
int main() {
	int w = 0, h = 0; cin >> w >> h;
	if (w < 3 || w >11 || h < 3 || h>11) {
		cout << "So khong hop le! Nhap lai!";
	}
	else {
		draw1(w, h);
		draw2(w, h);
	}
	return 0;
}