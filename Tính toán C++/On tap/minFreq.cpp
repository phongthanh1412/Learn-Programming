#include <iostream>
#define max 30
using namespace std;
void scan(int a[][max], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void findMinFreq(int a[][max], int m, int n) {
	int freq[30] = { 0 };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int n = a[i][j];
			while (n > 0) {
				int tmp = n % 10;
				freq[tmp]++;
				n /= 10;
			}
		}
	}
	int minDig = -1;
	int minFreq = 1e9;
	for (int i = 0; i < 30; i++) {
		if (freq[i] > 0 && freq[i] < minFreq) {
			minDig = i;
			minFreq = freq[i];
		}
	}
	if (minDig != -1)
		cout << "Chu so xuat hien it nhat: " << minDig;
	else cout << "Khong lam duoc";
}
int main() {
	int m = 0, n = 0;
	cin >> m >> n;
	int a[max][max];
	scan(a, m, n);
	findMinFreq(a, m, n);
	return 0;
}