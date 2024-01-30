#include <iostream>
using namespace std;
void nhap (int a[], int &n)
{
    for (int i = 0; i < n; i++) cin >> a[i];
}
bool checkEvenNumber (int a[], int n)
{
   for (int i = 0; i < n; i++)
   {
    if (a[i] % 2 == 0 && a[i] < 200) return 1;
   }
   return 0;
}

int main ()
{
  int n; cin >> n;
  int a[n];
  nhap (a, n);
  bool flag = checkEvenNumber (a, n);
  if (flag == 1) cout << "Found!";
  else cout << "Not Found!";
  return 0;
}