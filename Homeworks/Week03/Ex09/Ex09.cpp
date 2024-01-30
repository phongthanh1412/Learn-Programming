#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n = 0; cin >> n;
	float x = 0; cin >> x;
	float sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += pow(x, i);
	}
	cout << sum;
	return 0;
}
