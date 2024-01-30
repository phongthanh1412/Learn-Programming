#include <iostream>
using namespace std;
void printOdd(int n) {
	for (int i = 1; i < n; i += 2) {
		cout << i << " ";
	}
	cout << endl;
}
void printInteger(int n) {
	for (int i = 0; i < n; i++) {
		cout << i << " ";
	}
}
int main() {
	int n = 0;
	cin >> n;
	printOdd(n);
	printInteger(n);
	return 0;
}