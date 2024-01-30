#include <iostream>
using namespace std;
void nhap(int a[], int &n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
bool isArrayGrow (int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] >= a[i]) cnt ++;
    }
    if (cnt == n - 1) return 1;
    else return 0;
}
void check (int a[], int n)
{
    if (isArrayGrow (a, n)) cout << "1";
    else cout << "0";
    
}
int main ()
{
  int n;
  cin >> n;
  int a[n];
  nhap (a, n);
  check (a, n);
  return 0;
}