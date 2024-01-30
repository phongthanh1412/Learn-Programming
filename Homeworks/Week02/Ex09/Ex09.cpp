#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	long long tienluong = 0;
	cin >> tienluong;
	cout << "Chi tieu thiet yeu: " << fixed << setprecision(0) << 0.55 * tienluong << endl;
	cout << "Tu do tai chinh: " << 0.1 * tienluong << endl;
	cout << "Giao duc: " << 0.1 * tienluong << endl;
	cout << "Chi tieu dai han: " << 0.1 * tienluong << endl;
	cout << "Tan huong: " << 0.1 * tienluong << endl;
	cout << "Cho di: " << 0.05 * tienluong << endl;
	return 0;
}