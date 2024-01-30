#include <iostream>
#include <math.h>
using namespace std;
void nhap (int a[], int &n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
bool checkIsPrime (int n)
{ 
    if (n < 2) return false;
    else if (n >= 2)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0) return 0;
        }
    }
    return 1;
}
int countPrime (int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
      if (checkIsPrime (a[i]) == true && a[i] < 100)
      cnt++;
    }
    return cnt;
}
int main ()
{
  int n; cin >> n;
  int a[n];
  nhap (a, n);
  int cnt = countPrime (a, n);
  cout << "So gia tri nguyen to nho hon 100 la: " << cnt;
  return 0;
}