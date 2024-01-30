#include <iostream>
using namespace std;
int ucln(int a, int b) {
	if (a == 0 || b == 0)
		return a + b;
	while (a != b) {
		if (a > b)
			a -= b;
		else if (b > a)
			b -= a;
	}
	return a;
}
int bcnn(int a, int b) {
	return (a * b) / ucln(a, b);
}
int main() {
	int a = 0, b = 0;
	cin >> a >> b;
	cout << "Uoc chung lon nhat: " << ucln(a, b) << endl;
	cout << "Boi chung nho nhat: " << bcnn(a, b);
	return 0;
}