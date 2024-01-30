#include <iostream>
#include <math.h>
#define max 100
using namespace std;
void nhap (int a[max][max], int &m, int &n)
{
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}
void xuat (int a[max][max], int m, int n)
{
    cout << "MATRIX: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    } 
}
bool checkQueenNumber (int a[][max], int m, int n, int x, int y)
{
    int k = a[x][y];
    // max row
    for (int j = 0; j < n; j++)
    {
        if (a[x][j] > k)
         return false;
        return true;
    }
    // max column
    for (int i = 0; i < m; i++)
    {
        if (a[i][y] > k)
         return false;
        return true;
    }
    // downright
     int i = x + 1;
     int j = y + 1;
    while (i < m && j < n)
    {
       
        if (a[i][j] > a[x][y])
        { return false;
         i++;
         j++;
        return true;
        }
    }
   //downleft
     i = x + 1;
     j = y - 1;
     while (i < m && j >= 0)
    {
       
        if (a[i][j] > a[x][y])
        { return false;
         i++;
         j--;
        return true;
        }
    }
    //upright
     i = x - 1;
     j = y + 1;
     while (i >= 0 && j < n)
    {
       
        if (a[i][j] > a[x][y])
        { return false;
         i--;
         j++;
        return true;
        }
    }
    //upleft
     i = x - 1;
     j = y - 1;
     while (i >= 0 && j >= 0)
    {
       
        if (a[i][j] > a[x][y])
        { return false;
         i--;
         j--;
        return true;
        }
    }
}
int countQueenNumber (int a[][max], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (checkQueenNumber (a, m, n, i, j) == true)
            {
                dem++;
            }
        }
    }
}
int main ()
{
  int a[max][max], m, n;
  cin >> m >> n;
  nhap (a,m,n);
  xuat(a,m,n);
  int dem = countQueenNumber (a, m, n);
  cout << "So luong phan tu hoang hau: " << dem;
  return 0;
}