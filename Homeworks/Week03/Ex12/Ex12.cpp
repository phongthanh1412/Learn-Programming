#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n = 0; cin >> n;
	float sum1 = 0, sum2 = 0;
	for (int i = 1; i <= n; i++) {
		sum1 += i;
		sum2 += 1 / sum1;
	}
	cout << (float) sum2;
	return 0;
}
