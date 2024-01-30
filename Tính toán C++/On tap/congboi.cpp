#include<iostream>
using namespace std;
void scan(int a[], int n) {
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int check(int a[], int n) {
	float p1 = 0, p2 = 0;
	for (int i = 0; i < n; i++) {
		p1 = (float)a[i + 1] / a[i];
		p2 = (float)a[i + 2] / a[i + 1];
		float d = p2 - p1;
		if (d != 0) {
		    return 0;
		}
		break;
	}
	return p1;
}
int main() {
	int n = 0; cin >> n;
	int a[30];
	scan(a, n);
	cout << check(a, n);
	return 0;
}