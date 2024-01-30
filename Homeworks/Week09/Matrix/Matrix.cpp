#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
using namespace std;
#define max 31
int findMax(int a[][max], int m, int n) {
	int maxi = a[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] > maxi)
				maxi = a[i][j];
		}
	}
	return maxi;
}
int findMin(int a[][max], int m, int n) {
	int mini = a[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] < mini)
				mini = a[i][j];
		}
	}
	return mini;
}
bool check(int n) {
	int cnt = 0;
	if (n < 2)
		return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				cnt++;
		}
		if (cnt > 0)
			return 0;
	}
	return 1;
}
int countPrime(int a[][max], int m, int n) {
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (check(a[i][j]))
				cnt++;
		}
	}
	return cnt;
}
bool kiemTraDoiXung(int n) {
	int sum = 0;
	int tmp = n;
	while (n > 0) {
		int sodu = n % 10;
		sum = sum * 10 + sodu;
		n /= 10;
	}
	if (sum == tmp)
		return 1;
	return 0;
}
void primeMax(int a[][max], int m, int n) {
	int maxi = -1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (check(a[i][j]) == 1 && a[i][j] > maxi) {
				maxi = a[i][j];
			}
		}
	}
	if (maxi == -1)
		cout << "8) Khong ton tai so nguyen to\n";
	else cout << "So nguyen to lon nhat trong ma tran la: " << maxi << endl;
}
bool kiemTraGiamDan(int a[][max], int m, int n) {
	bool flag1 = 0;
	for (int i = 0; i < m; i++) {
		bool flag2 = 1;
		for (int j = 0; j < n - 1; j++) {
			if (a[i][j] < a[i][j + 1]) {
				flag2 = 0;
				break;
			}
		}
		if (flag2) {
			flag1 = 1;
			break;
		}
	}
	return flag1;
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void printSwap(int a[][max], int m, int n) {
	for (int i = 0; i < m; i++) {
			swap(a[i][0], a[i][n - 1]);
	}
}
void print(int a[][max], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}
	

int main() {
	srand(time(0));
	int n = 10 + rand() % 21;
	int m = 10 + rand() % 21;
	int a[max][max];
	cout << "1) Hai so sau khi phat sinh ngau nhien la: " << m << " va " << n << endl;
	cout << "2-3) Ma tran sau khi phat sinh la: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 86 + 15;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	int sum_row = 0, sum_col = 0;
	cout << "4) Tong cac so tren dong dau tien la: ";
	for (int j = 0; j < n; j++) {
		sum_row += a[0][j];
	}
	cout << sum_row << endl;
	cout << "   Tong cac so tren cot cuoi cung la: ";
	for (int i = 0; i < m; i++) {
		sum_col += a[i][n - 1];
	}
	cout << sum_col << endl;
	cout << "5) So lon nhat trong ma tran la: " << findMax(a, m, n) << endl;
	cout << "   So nho nhat trong ma tran la: " << findMin(a, m, n) << endl;
	cout << "6) So luong cac so nguyen to la: " << countPrime(a, m, n) << endl;
	bool flag = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (kiemTraDoiXung(a[i][j]))
				flag = 1;
		}
	}
	if (flag)
		cout << "7) Ma tran ton tai so doi xung!\n";
	else
		cout << "7) Ma tran khong ton tai so doi xung!\n";
	int maximum = -1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (check(a[i][j]) == 1 && a[i][j] > maximum) {
				maximum = a[i][j];
			}
		}
	}
	if (maximum == -1)
		cout << "8) Khong ton tai so nguyen to!\n";
	else cout << "8) So nguyen to lon nhat trong ma tran la: " << maximum << endl;
	if (kiemTraGiamDan(a, m, n))
		cout << "9) Ma tran ton tai dong co cac phan tu giam dan tu trai qua phai!\n";
	else cout << "9) Ma tran khong ton tai dong co cac phan tu giam dan tu trai qua phai!\n";
	printSwap(a, m, n);
	cout << "10) Ma tran sau khi hoan vi cot dau va cot cuoi la: " << endl;
	print(a, m, n);
	return 0;
}