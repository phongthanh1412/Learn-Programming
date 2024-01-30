#include<iostream>
#include<cstdlib>
#include<ctime>
#include<math.h>
#include<stdio.h>
using namespace std;
int random() {
	return 10 + rand() % 21;
}
void randArray(int a[], int n) {
	cout << "4) Mang gom " << n << " phan tu sau khi phat sinh ngau nhien la:\n";
	for (int i = 0; i < n; i++) {
		a[i] = 10 + rand() % 91;
		cout << " " << a[i] << " ";
	}
	cout << endl;
}
void sapXep(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << " " << a[i] << " ";
	}
	cout << endl;
}
void findSpecial(int a[], int n) {
	int mini = 1e9, maxi = -1e9;
	float sum = 0, average = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < mini)
			mini = a[i];
		if (a[i] > maxi)
			maxi = a[i];
		sum += a[i];
		average = sum / n;
	}
	cout << "5) Gia tri nho nhat: ";
	cout << mini << endl;
	cout << "   Gia tri lon nhat: ";
	cout << maxi << endl;
	cout << "   Tong cac phan tu trong mang: ";
	cout << sum << endl;
	cout << "   Trung binh cac phan tu trong mang: ";
	cout << average << endl;
}
void count_odd_even(int a[], int n) {
	int cnt_odd = 0, cnt_even = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			cnt_even++;
		else cnt_odd++;
	}
	cout << "6) So luong so chan: " << cnt_even << "\n";
	cout << "   So luong so le: " << cnt_odd << "\n";
}
bool square_num(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] == (int)sqrt(a[i]) * (int)sqrt(a[i])) {
			return 1;
			break;
		}
	}
	return 0;
}
bool checkPrime(int n) {
	if (n < 2)
		return 0;
	if (n >= 2) {
		int cnt = 0;
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0)
				cnt++;
		}
		if (cnt > 0)
			return 0;
	}
	return 1;
}
int count_prime(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (checkPrime(a[i]))
			cnt++;
	}
	return cnt;
}
void print_prime_array(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (checkPrime(a[i]))
			cout << a[i] << " ";
	}
	cout << endl;
}
void print_prime_array_2(int a[], int n) {
	int cnt_prime = count_prime(a, n);
	if (cnt_prime > 0) {
		cout << "8) Cac so nguyen to la: ";
		print_prime_array(a, n);
	}
	else cout << "8) Khong ton tai so nguyen to!\n";
}
bool div_3(int n) {
	int sum = 0;
	while (n > 0) {
		int sodu = n % 10;
		sum += sodu;
		n /= 10;
	}
	if (sum % 3 == 0)
		return 1;
	return 0;
}
void find_div_3(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (div_3(a[i])) {
			cout << "9) So chia het cho 3 dau tien la: " << a[i] << endl;
			break;
		}
	}
}
void find_last_prime(int a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (checkPrime(a[i])) {
			cout << "10) So nguyen to cuoi cung trong mang la: " << a[i] << endl;
			break;
		}
	}
}
bool check_symmetry(int n) {
	int sum = 0;
	int tmp = n;
	while (tmp > 0) {
		int sodu = n % 10;
		sum = sum * 10 + sodu;
		tmp /= 10;
	}
	if (sum == n) {
		return 1;
	}
	else return 0;
}
int count_symmetry(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (check_symmetry(a[i]))
			cnt++;
	}
	return cnt;
}
void print_symmetry_1(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (check_symmetry(a[i]))
			cout << a[i] << " ";
	}
	cout << endl;
}
void print_symmetry_2(int a[], int n) {
	int cnt_sym = count_symmetry(a, n);
	if (cnt_sym > 0) {
		cout << "11) Cac so doi xung la: ";
		print_symmetry_1(a, n);
	}
	else cout << "11) Khong ton tai so doi xung\n";
}
bool div_5(int n) {
	int sodu = n % 10;
	if (sodu == 0 || sodu == 5)
		return 1;
	return 0;
}
void find_div_5(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (div_5(a[i])) {
			cout << "12) So chia het cho 5 dau tien la: " << a[i] << endl;
			break;
		}
	}
}
int find_x(int a[], int n) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (abs(a[i]) > x)
			x = abs(a[i]);
	}
	return x;
}

int gcd(int a, int b) {
	if (a == 0 || b == 0)
		return  a + b;
	while (a != b) {
		if (a > b)
			a -= b;
		else b -= a;
	}
	return a;
}
void print_gcd_array(int a[], int n) {
	int res = a[0];
	cout << "15) Uoc chung lon nhat cac phan tu trong mang: ";
	for (int i = 0; i < n - 1; i++) {
		int ans = gcd(a[i], res);
	}

	cout << endl;
}

void ucln(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = min; i >= 1; i--)
	{
		bool kt = true;
		for (int j = 0; j < n; j++)
		{
			if (a[j] % i != 0)
			{
				kt = false;
				break;
			}
		}
		if (!kt)
		{
			continue;
		}
		cout << "15) Uoc chung chung lon nhat cua mang la: " << i << endl;
		break;
	}
}
bool checkOdd(int n) {
	while (n > 0) {
		int sodu = n % 10;
		if (sodu % 2 == 0)
			return 0;
		n /= 10;
	}
	return 1;
}
int count_odd(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (checkOdd(a[i]))
			cnt++;
	}
	return cnt;
}
void print_odd_array(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (checkOdd(a[i]))
			cout << a[i] << " ";
	}
	cout << endl;
}
void print_odd_array_2(int a[], int n) {
	int cnt_odd = count_odd(a, n);
	if (cnt_odd > 0) {
		cout << "16) Cac so toan le la: ";
		print_odd_array(a, n);
	}
	else cout << "16) Khong ton tai so toan le!\n";
}
bool checkEven(int n) {
	while (n > 0) {
		int sodu = n % 10;
		if (sodu % 2 != 0)
			return 0;
		n /= 10;
	}
	return 1;
}
int count_even(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (checkEven(a[i]))
			cnt++;
	}
	return cnt;
}
bool checkOddHead(int n) {
	int sodu = 0;
	while (n >= 10) {
		n /= 10;
	}
	sodu = n;
	if (sodu % 2 == 0)
		return 0;
	return 1;
}
int count_odd_head(int a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (checkOddHead(a[i]))
			cnt++;
	}
	return cnt;
}
void print_odd_head_array(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (checkOddHead(a[i]))
			cout << a[i] << " ";
	}
	cout << endl;
}
void print_odd_head_array_2(int a[], int n) {
	int cnt_odd_head = count_odd_head(a, n);
	if (cnt_odd_head > 0) {
		cout << "19) Cac so co chu so le dau tien la: ";
		print_odd_head_array(a, n);
	}
	else cout << "19) Khong ton tai so co chu so le dau tien!\n";
}
int main() {
	srand(time(NULL));
	int a[31];
	// int b[31];
	cout << "1) So n sau khi phat sinh ngau nhien la: ";
	int n = random();
	cout << n << endl;
	randArray(a, n);
	// for (int i = 0; i < n; i++){
	//     a[i] = b[i];
	// }
	cout << "  Mang sau khi sap xep la:\n";
	sapXep(a, n);
	xuat(a, n);
	findSpecial(a, n);
	count_odd_even(a, n);
	if (square_num(a, n))
		cout << "7) Ton tai so chinh phuong!\n";
	else cout << "7) Khong ton tai so chinh phuong!\n";
	print_prime_array_2(a, n);
	find_div_3(a, n);
	find_last_prime(a, n);
	print_symmetry_2(a, n);
	find_div_5(a, n);
	cout << "13) So nguyen x sao cho khoang [-x;x] chua toan bo phan tu mang la: ";
	cout << find_x(a, n) << endl;
	int cnt1 = 0;
	for (int i = 2; i < n; i++) {
		if (a[i] == a[i - 1] + a[i - 2]) {
			cout << " " << a[i] << " ";
			cnt1++;
		}
	}
	if (cnt1 == 0) {
		cout << "14) Khong ton tai so co tong bang 2 so lan can trai!\n";
	}
	//print_gcd_array(a, n);

	ucln(a, n);
	///////////////////////////
	// for (int i = 0; i < n; i++){
	//     a[i] = b[i];
	// }
	print_odd_array_2(a, n);
	cout << "17) So chu so toan chan: ";
	cout << count_even(a, n);
	cout << endl;

	cout << "18) ";
	int cnt2 = 0;
	for (int i = 1; i < n - 1; i++) {
		if (a[i] % 2 == 0 && a[i - 1] % 2 == 0 && a[i + 1] % 2 == 0) {
			cout << a[i] << " ";
			cnt2++;
		}
	}
	cout << endl;
	if (cnt2 == 0) {
		cout << "Khong ton tai so chan co 2 so lan can trai phai cung chan!\n";
	}
	print_odd_head_array_2(a, n);
	return 0;
}