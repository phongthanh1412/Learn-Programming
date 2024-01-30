#include <iostream>
using namespace std;
struct phanSo
{
    int tu;
    int mau;
};

void nhap(phanSo &ps)
{
    cin >> ps.tu;
    cin >> ps.mau;
    if (ps.mau == 0)
    {
        cout << "Nhap lai!";
    }
}
int ucln(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else if (b > a)
            b -= a;
    }
    return a;
}
void rutGon(phanSo &ps)
{
    int c = ucln(ps.tu, ps.mau);
    ps.tu /= c;
    ps.mau /= c;
}
phanSo Tong(phanSo a, phanSo b)
{
    phanSo tong;
    tong.tu = a.tu * b.mau + b.tu * a.mau;
    tong.mau = a.mau * b.mau;
    rutGon(tong);
    return tong;
}
void xuat(phanSo ps)
{
    cout << ps.tu << "/" << ps.mau;
}
int main()
{
    phanSo ps1, ps2;
    nhap(ps1);
    nhap(ps2);
    phanSo tong = Tong(ps1, ps2);
    xuat(tong);
    return 0;
}