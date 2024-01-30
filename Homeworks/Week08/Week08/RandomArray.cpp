#include<iostream>
#include<ctime>
#include<math.h>
using namespace std;
bool checkPrime(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int findPrime(int n) {
	int cnt = 1;
	while (1) {
		if (checkPrime(n + cnt))
			return n + cnt;
		cnt++;
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	srand(time(0));
	int n = rand() % 21 + 10;
	cout << "So nguyen sau khi phat sinh ngau nhien la: " << n << endl;
	int* a = new int[n];
	int m = 0;
	for (int i = 0; i < n; i++) {
		int tmp = rand() % 21 + 15;
		for (int j = 0; j < m; j++) {
			if (tmp < a[j]) {
				for (int k = m; k > j; k--) {
					a[k] = a[k - 1];
				}
				a[j] = tmp;
				m++;
				break;
			}
		}
		if (m != i + 1) {
			a[m] = tmp;
			m++;
		}
	}
	cout << "Mang gom " << n << " phan tu sau khi phat sinh la: " << endl;
	xuat(a, n);
	int same = a[0];
	int cnt = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] == same) {
			a[i - 1] = 0;
			cnt++;
		}
		else {
			same = a[i];
		}
	}
	// Sau khi loại các phần tử trùng lặp thì số phần tử còn lại sẽ giảm đi
	int h = n - cnt;
	int* b = new int[h];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != 0) {
			b[t] = a[i];
			t++;
		}
	}
	delete[] a;
	cout << "Mang sau khi xoa cac phan tu trung lap la: " << endl;
	xuat(b, h);
	int max = b[h - 1];
	for (int i = h - 1; i > 0; i--) {
		b[i] = b[i - 1];
	}
	b[0] = max;
	cout << "Mang sau khi dich phan tu cuoi len dau la: " << endl;
	xuat(b, h);
	int x = 0, y = h - 1;
	while (x < y) {
		if (b[x] % 2) {
			x++;
			continue;
		}
		if (b[y] % 2) {
			y--;
			continue;
		}
		swap(b[x], b[y]);
		x++;
		y--;
	}
	cout << "Mang sau khi dao nguoc thu tu cac so chan: " << endl;
	xuat(b, h);
	for (int i = 0; i < h; i++) {
		b[i] = findPrime(b[i]);
	}
	cout << "Mang sau khi thay cac phan tu boi so nguyen to gan no nhat la: " << endl;
	xuat(b, h);
	delete[] b;
	return 0;
}