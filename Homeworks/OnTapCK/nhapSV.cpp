#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
struct sinhVien
{
    string mssv;
    string hoten;
    float diemtrungbinh;
};
void nhap(sinhVien sv[], int &n)
{
    if (n > 11)
        cout << "Nhap lai!";
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cout << "Ma so: ";
        cin >> sv[i].mssv;
        cout << "Ho va ten: ";
        cin.ignore();
        getline(cin, sv[i].hoten);
        cout << "Diem trung binh: ";
        cin >> sv[i].diemtrungbinh;
        cin.ignore();
    }
}
void xuat(sinhVien sv[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cout << "Ma so: ";
        cout << sv[i].mssv << endl;
        cout << "Ho va ten: ";
        cout << sv[i].hoten << endl;
        cout << "Diem trung binh: ";
        cout << sv[i].diemtrungbinh << endl;
    }
}
bool soSanh(sinhVien &a, sinhVien &b)
{
    if (a.diemtrungbinh != b.diemtrungbinh)
        return a.diemtrungbinh > b.diemtrungbinh;
    else
        return a.mssv < b.mssv;
}
void xuat10(sinhVien sv[], int n)
{
    for (int i = 0; i < 2; i++)
    {
        cout << "Sinh vien thu " << i + 1 << endl;
        cout << "Ma so: ";
        cout << sv[i].mssv << endl;
        cout << "Ho va ten: ";
        cout << sv[i].hoten << endl;
        cout << "Diem trung binh: ";
        cout << sv[i].diemtrungbinh << endl;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    sinhVien sv[10];
    nhap(sv, n);
    // xuat(sv, n);
    sort(sv, sv + n, soSanh);
    xuat10(sv, n);
    return 0;
}