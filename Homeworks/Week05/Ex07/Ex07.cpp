#include <iostream>
using namespace std;
void readInteger(int n) {
	if (n < 100 || n>999) {
		cout << "So khong hop le";
	}
	else {
		int donvi = n % 10;
		n /= 10;
		int tram = n / 10;
		int chuc = n % 10;

		if (tram == 1)
			cout << "Mot tram ";
		if (tram == 2)
			cout << "Hai tram ";
		if (tram == 3)
			cout << "Ba tram ";
		if (tram == 4)
			cout << "Bon tram ";
		if (tram == 5)
			cout << "Nam tram ";
		if (tram == 6)
			cout << "Sau tram ";
		if (tram == 7)
			cout << "Bay tram ";
		if (tram == 8)
			cout << "Tam tram ";
		if (tram == 9)
			cout << "Chin tram ";

		if (chuc == 1)
			cout << "muoi ";
		if (chuc == 2)
			cout << "hai muoi ";
		if (chuc == 3)
			cout << "ba muoi ";
		if (chuc == 4)
			cout << "bon muoi ";
		if (chuc == 5)
			cout << "nam muoi ";
		if (chuc == 6)
			cout << "sau muoi ";
		if (chuc == 7)
			cout << "bay muoi ";
		if (chuc == 8)
			cout << "tam muoi ";
		if (chuc == 9)
			cout << "chin muoi ";
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