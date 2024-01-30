#include<iostream>
#define max 30
using namespace std;
void print(int a[][max], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
	 cout << endl;
	}
}
void square(int a[][max], int n) {
	int cnt = 1;
	for (int j = n - 1; j >= 0; j--) {
		a[n - 1][j] = cnt++;
	}
	for (int i = n - 2; i >= 0; i--) {
		a[i][0] = cnt++;
	}
	for (int j = 1; j < n; j++) {
		a[0][j] = cnt++;
	}
	for (int i = 1; i < n - 1; i++) {
		a[i][n - 1] = cnt++;
	}
	for (int i = 1; i < n - 1; i++)
		for (int j = 1; j < n - 1; j++)
			a[i][j] = 0;

}
int main() {
	int n = 0; cin >> n;
	int a[max][max];
	square(a, n);
	print(a, n);
	return 0;
}