#include <iostream>
using namespace std;
void nhap (int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }
}
int printMax (int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }
    return max;
}
int printSecondMax (int *a, int n)
{
    int max = printMax (a, n);
    int max2 = max;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != max) max2 = a[i];
        // break;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max2 && a[i] != max) max2 = a[i];
    }
    return max2;
}

int main ()
{
   int n;
   cout << "So luong phan tu cua mang: ";
   cin >> n;
  int *a = new int [n];
  printMax (a, n);
  printSecondMax (a, n);
  nhap (a, n);
  int max = printMax (a, n);
  int max2 = printSecondMax (a, n);
  if (max != max2)
  {
    cout << "SecondMax = " << max2;
  }
  else cout << "Khong co gia tri lon thu hai!";

  return 0;
}