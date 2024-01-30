#include <iostream>
using namespace std;
bool check(int n) {
	int p = 1;
	for (int i = 1; p < n; i++) {
		p *= 3;
	}
	if (p == n)
		return 1;
	return 0;
}
int main() {
	int n = 0;
	cin >> n;
	if (check(n))
		cout << n << " co dang 3^k";
	else cout << n << " khong co dang 3^k";
	return 0;
}