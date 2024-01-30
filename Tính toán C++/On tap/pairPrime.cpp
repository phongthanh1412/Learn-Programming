#include <iostream>
#include <math.h>
using namespace std;
bool check(int n) {
	int cnt = 0;
	if (n < 2)
		return 0;
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				cnt++;
		}
		if (cnt == 0)
			return 1;
	}
	return 0;
}
void pairPrime(int n) {
	bool flag = 0;
	for (int i = 0; i <= n / 2; i++) {
		if (check(i) && check(n - i)) {
			cout << "(" << i << "," << n - i << ")";
			flag = 1;
		cout << endl;
		}
	}
	if (!flag)
		cout << "Khong tim thay!";
}
int main() {
	int n = 0;
	cin >> n;
	pairPrime(n);
	return 0;
}