#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	float tich = 1;
	for (int i = 1; i <= n; i++) {
		tich *= i;
	}
	cout << tich;
	return 0;
}
