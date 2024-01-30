#include <iostream>
#include <string.h>
using namespace std;
string toString(int n) {
	string res = "";
	bool isMinus = 0;
	if (n < 0) {
		isMinus = 1;
		n = -n;
	}
	while (n > 0) {
		int tmp = n % 10;
		char digit = '0' + tmp;
		res = digit + res;
		n /= 10;
	}
	if (isMinus)
		res = "-" + res;
	return res;
}
int main() {
	int n = 0;
	cin >> n;
	cout << toString(n);
	return 0;
}