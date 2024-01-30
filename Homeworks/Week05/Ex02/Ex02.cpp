#include <iostream>
#include <math.h>
using namespace std;
void solve(float a, float b, float c) {
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem!";
			}
			else {
				cout << "Phuong trinh vo nghiem!";
			}
		}
		else {
			if (c == 0)
				cout << "Phuong trinh co nghiem x= " << 0;
			else if ((float)-c / b > 0)
				cout << "Phuong trinh co nghiem\n" << (float)sqrt(-c / b) << "\n" << (float)-sqrt(-c / b) << endl;
			else cout << "Phuong trinh vo nghiem!";
		}
	}
	else {
		float d = b * b - 4 * a * c;
		if (d == 0) {
			float t = (float)-b / (2 * a);
			if (t > 0) {
				cout << "Phuong trinh co 2 nghiem\n " << (float)sqrt(-b / (2 * a)) << "\n" << (float)-sqrt(-b / (2 * a));
			}
		}
		else if (d > 0) {
			float t1 = (-b + sqrt(d)) / (2 * a);
			float t2 = (-b - sqrt(d)) / (2 * a);
			if ((t1 >=0 ) && (t2 <= 0)) {
				float x1 = sqrt(t1);
				float x2 = -sqrt(t1);
				if (x1 == x2) {
					cout << "Phuong trinh co 1 nghiem:\n";
					cout << (float)x1;
				}
				else {
				   cout << "Phuong trinh co 2 nghiem:\n";
				   cout << (float)x1 << "\n" << (float)x2 << "\n";
				}
			}
			if ((t1 <= 0) && (t2 >= 0)) {
				float x1 = sqrt(t2);
				float x2 = -sqrt(t2);
				if (x1 == x2) {
					cout << "Phuong trinh co 1 nghiem:\n";
					cout << (float)x1;
				}
				else {
					cout << "Phuong trinh co 2 nghiem:\n";
					cout << (float)x1 << "\n" << (float)x2 << "\n";
				}
			}
			if ((t1 >= 0) && (t2 >= 0)) {
				cout << "Phuong trinh co 4 nghiem:\n";
				float x1 = sqrt(t1);
				float x2 = -sqrt(t1);
				float x3 = sqrt(t2);
				float x4 = -sqrt(t2);
				cout << (float)x1 << "\n" << (float)x2 << "\n" << (float)x3 << "\n" << (float)x4;
			}
			if (t1 < 0 && t2 < 0)
				cout << "Phuong trinh vo nghiem!";
		}
		else cout << "Phuong trinh vo nghiem!";
	}
}
int main() {
	float a = 0, b = 0, c = 0;
	cin >> a >> b >> c;
	solve(a, b, c);
	return 0;
}