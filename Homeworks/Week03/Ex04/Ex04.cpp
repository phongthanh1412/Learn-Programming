#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	float sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += (float)1 / (2 * i + 1);
	}
	cout << sum;
	return 0;
}
