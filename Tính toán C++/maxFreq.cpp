#include <iostream>
using namespace std;
void nhap (int a[], int &n)
{
  for (int i = 0; i < n; i++) cin >> a[i];
}
int Freq (int a[], int &n)
{
  int cnt[10001] = {0};
 for (int i = 0; i< n; i++)
    cnt[a[i]]++;
  int dem = 0; int res;
  for (int i = 0; i < n; i++)
  {
    if (cnt[a[i]] > dem) 
    {
      dem = cnt[a[i]]; res = a[i];
    }
    else if (cnt[a[i]] == dem)
    {
      if (res > a[i]) res = a[i];
    }
  }
  cout << "Phan tu " << res << " xuat hien voi tan suat nhieu nhat la " << dem;
}
int main ()
{
  int n; cin >> n;
  int a[n];
  nhap (a, n);
  Freq (a, n);
  return 0;
}