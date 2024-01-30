#include <iostream>
#include <math.h>
using namespace std;
void nhap(int a[], int &n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
int printSquare (int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0) sum += a[i] * a[i];
    }
    return sum;
}
int main ()
{
  int n;
  cin >> n;
  int a[n];
  nhap (a, n);
  int sum = printSquare (a, n);
  cout << "Tong binh phuong cac so am: " << sum;
  return 0;
}