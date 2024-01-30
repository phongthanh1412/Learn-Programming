#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int p = 1, sum = 0;
	for (int i = 1; i <= n; i++) {
		p *= i;
		sum += p;
	}
	cout << sum;
	return 0;
}
