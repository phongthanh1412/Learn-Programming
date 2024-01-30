#include<iostream>
using namespace std;
int main() {
	float a = 0, b = 0;
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh vo so nghiem";
		}
		else cout << "Phuong trinh vo nghiem";
	}
	else cout << "Phuong trinh co nghiem: " << -b / a;
	return 0;
}