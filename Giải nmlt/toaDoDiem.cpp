#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
struct toaDo 
{
    int x, y;
};
void nhapToaDo (toaDo &a)
{
    cout << "x = ";
    cin >> a.x;
    cout << "y = ";
    cin >> a.y;
}
void xuatToaDo (toaDo a)
{
    cout << "(" << a.x << " ; " << a.y << ")";
}
int main ()
{
  // system ("color 2");
    toaDo a1, a2, a3;
    nhapToaDo (a1);
    xuatToaDo (a1);
      cout << endl;
    nhapToaDo (a2);
    xuatToaDo (a2);
      cout << endl;
    nhapToaDo (a3);
    xuatToaDo (a3);
  
    return 0;
}