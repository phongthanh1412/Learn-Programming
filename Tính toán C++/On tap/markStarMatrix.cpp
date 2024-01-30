#include<iostream>
#include<ctime>
#include<cstdlib>
#define max 30
using namespace std;
void randomMatrix(int a[][max], int m, int n) {
	srand(time(0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int n = -900 + rand() % 1801;
			if (n == 0)
				n = 1;
			a[i][j] = n;
		}
	}
}
int countRow(int a[][max], int n, int i) {
	int cntRow = 0;
	for (int j = 0; j < n; i++) {
		if (a[i][j] < 0)
			cntRow++;
	}
	return cntRow;
}
int countCol(int a[][max], int m, int j) {
	int cntCol = 0;
	for (int i = 0; i < m; i++) {
		if (a[i][j] < 0)
			cntCol++;
	}
	return cntCol;
}
void findRowCol(int a[][max], int m, int n, int& row, int& col) {
	row = 0;
	col = 0;
	int max_row = -1e9;
	int max_col = -1e9;
	for (int i = 0; i < m; i++) {
		int x = countRow(a, n, i);
		if (x > max_row) {
			max_row = x;
			row = i;
		}
	}
	for (int j = 0; j < n; j++) {
		int y = countCol(a, m, j);
		if (y > max_row) {
			max_row = y;
			col = j;
		}
	}
}
void findMatrix(int a[][max], int m, int n, int row, int col) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == row || j == col) {
				cout << "*";
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
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
	int m = 0, n = 0; cin >> m >> n;
	int row = 0, col = 0;
	int a[max][max];
	randomMatrix(a, m, n);
	print(a, m, n);
	findRowCol(a, m, n, row, col);
	findMatrix(a, m, n, row, col);
	return 0;
}