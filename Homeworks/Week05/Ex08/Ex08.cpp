#include <iostream>
using namespace std;
void draw1(int h) {	
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= 2 * h - 1; j++) {
				if (j >= h - i + 1 && j <= h + i - 1)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}	
}
void draw2(int h) {
	
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= 2 * h - 1; j++) {
				if (i == h || j == h - i + 1 || j == h + i - 1)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}	
}
void draw3(int h) {
	
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
}
void draw4(int h) {

		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= i; j++) {
				if (j == i || j == 1 || i == h)
					cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
}

int main() {
	int n = 0; cin >> n;
	if (n < 3 || n >= 10) {
		cout << "So khong hop le! Nhap lai!";
	}
	else {
		draw1(n);
		draw2(n);
		draw3(n);
		draw4(n);
	}
	return 0;
}