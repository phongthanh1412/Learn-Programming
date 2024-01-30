#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
bool kiemTraMangTang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}
int tong(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            sum += a[i] * a[i];
    }
    return sum;
}
int main()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    int a[20];
    nhap(a, n);
    cout << kiemTraMangTang(a, n) << endl;
    cout << tong(a, n);
    return 0;
}