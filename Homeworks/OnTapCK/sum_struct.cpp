#include <iostream>
#include <fstream>

using namespace std;
int tong(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
void nhap(fstream& input, int a[], int n, char& character) {
	for (int i = 0; i < n; i++) {
		input >> a[i];
		input >> character;
	}
}
int findMax(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] > max) {
				max = a[j];
			}
		}
	}
	return max;
}
int main() {
	fstream input, output;
	int n = 0;
	int a[10];
	char character;
	input.open("input.txt", ios::in);
	if (input.fail()) {
		cout << "Khong mo duoc tap tin!";
	}
	else {
		cout << "Doc tap tin thanh cong!";
		input >> n;
	}
	nhap(input, a, n, character);
	output.open("output.txt", ios::out);
	output << tong(a, n);
	output << findMax(a, n);
	input.close();
	output.close();
	return 0;
}