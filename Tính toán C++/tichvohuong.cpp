#include <iostream>
using namespace std;
void nhap1vt (int &x1, int &x2, int &x3)
{
    cout << "NHAP x1, x2, x3: " << endl;
    cin >> x1 >> x2 >> x3;
}
int tichvohuong (int x1, int x2, int x3, int y1, int y2, int y3)
{
    return x1*y1 + x2*y2 + x3*y3;
}
int main ()
{
int x1, x2, x3, y1, y2, y3;
nhap1vt (x1, x2, x3);
nhap1vt (y1, y2, y3);
cout << "TICH VO HUONG LA: " << tichvohuong(x1, x2, x3, y1, y2, y3) << endl;
}
