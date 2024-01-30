#include <iostream>
using namespace std;
void nhap(int *a, int n)
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
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  return max;
}
int printMin (int *a, int n)
{
  int min = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i] < min)
    {
      min = a[i];
    }
  }
  return min;
}
int main ()
{
  int n;
  cout << "So luong phan tu cua mang: ";
  cin >> n;
  int *a = new int [n];
  nhap (a, n);
  printMax (a,n);
  printMin (a,n);
  int xmax = printMax (a,n);
  int xmin = printMin (a,n);
  cout << "Max = " << xmax << endl;
  cout << "Min = " << xmin;
  return 0;
}