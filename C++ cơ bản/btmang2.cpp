#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int cnt[1000002];
int main ()
{
  cout << "So luong test case: ";
  int tc; cin >> tc;
  while (tc--)
  {
    cout << "So luong phan tu trong mang: ";
    int n; cin >> n;
    memset (cnt, 0, sizeof(cnt));
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x > 0) cnt[x] = 1; //mang danh dau
    }
    for (int i = 1; i < 1000002; i++)
    {
        if (cnt[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    //cout << endl;
  }
  return 0;
}
