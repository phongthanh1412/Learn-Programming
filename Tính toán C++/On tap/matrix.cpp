#include<iostream>
#define max 30
using namespace std;
void scan(int a[][max], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
}
void special(int a[][max], int n) {
	int max_row[max];
	int min_col[max];
	for (int i = 0; i < n; i++) {
		max_row[i] = a[i][0];
		min_col[i] = a[0][i];
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max_row[i]) {
				max_row[i] = a[i][j];
			}
			if (a[i][j] < min_col[i]) {
				min_col[i] = a[i][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == max_row[i] && a[i][j] == min_col[j]) {
				cout << a[i][j] << " ";
			}
			
		}
	}
	cout << endl;
}
int main() {
	int n = 0;
	int a[max][max];
	cin >> n;
	scan(a, n);
	special(a, n);
	return 0;
}