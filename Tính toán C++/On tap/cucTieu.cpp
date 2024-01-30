#include<iostream>
using namespace std;
void scan(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void list(int a[], int n) {
	if (a[0] < a[1])
		cout << 0 << " ";
	for (int i = 1; i < n - 1; i++) {
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << i << " ";
	}
	if (a[n - 1] < a[n - 2])
		cout << n - 1;
}
int main() {
	int n = 0;
	cin >> n;
	int a[30];
	scan(a, n);
	list(a, n);
	return 0;
}