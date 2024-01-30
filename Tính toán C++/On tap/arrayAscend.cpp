#include <iostream>
using namespace std;
void scan(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
	
bool check(int a[], int n) {
	for (int i = 0; i < n - 1; i++)
		  if (a[i] > a[i + 1])
			return 0;
	return 1;
}
int sumSquare(int a[], int n) {
	int sum = 0, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0)
			cnt++;
	}
	if (cnt == 0)
		return 0;
	else 
		for (int i = 0; i < n; i++) {
			if (a[i] < 0)
				sum += a[i] * a[i];
		}
	
	
	return sum;
}
int main() {
	int n = 0; cin >> n;
	int a[30];
	scan(a, n);
	//cout << check(a, n);
	cout << sumSquare(a, n);
	return 0;
}