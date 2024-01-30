#include<iostream>
#include<string>
using namespace std;
struct nhanVien {
	string ms;
	int nam;
 };
void nhap(nhanVien nv[], int &n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhan vien thu " << i + 1 << endl;
		cout << "Ma so: ";
		cin >> nv[i].ms;
		cout << "Nam sinh: ";
		cin>> nv[i].nam;
	}
}
void find(nhanVien nv[], int n) {
	int max = nv[0].nam;
	for (int i = 1; i < n; i++) {
		if (nv[i].nam < max) {
			max = nv[i].nam;
		}
	}
	cout << "Nhan vien lon tuoi nhat co ma so:\n";
	for (int i = 0; i < n; i++) {
		if (nv[i].nam == max) {
			cout << nv[i].ms << "\n";
		}
	}
}

int main() {
	nhanVien nv[30];
	int n = 0;
	cout << "So luong nhan vien: ";
	cin >> n;
	nhap(nv, n);
	find(nv, n);
	return 0;
}