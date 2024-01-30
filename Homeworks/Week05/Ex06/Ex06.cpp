#include <iostream>
using namespace std;
void readInteger(int n) {
	if (n < 10 || n>99) {
		cout << "So khong hop le";
	}
	else {
		int chuc = n / 10;
		int donvi = n % 10;
		if (chuc == 1)
			cout << "Muoi ";
		if (chuc == 2)
			cout << "Hai muoi ";
		if (chuc == 3)
			cout << "Ba muoi ";
		if (chuc == 4)
			cout << "Bon muoi ";
		if (chuc == 5)
			cout << "Nam muoi ";
		if (chuc == 6)
			cout << "Sau muoi ";
		if (chuc == 7)
			cout << "Bay muoi ";
		if (chuc == 8)
			cout << "Tam muoi ";
		if (chuc == 9)
			cout << "Chin muoi ";
		if (donvi == 1)
			cout << "mot";
		if (donvi == 2)
			cout << "hai";
		if (donvi == 3)
			cout << "ba";
		if (donvi == 4)
			cout << "bon";
		if (donvi == 5)
			cout << "nam";
		if (donvi == 6)
			cout << "sau";
		if (donvi == 7)
			cout << "bay";
		if (donvi == 8)
			cout << "tam";
		if (donvi == 9)
			cout << "chin";
		}
}
int main() {
	int n = 0;
	cin >> n;
	readInteger(n);
	return 0;
}