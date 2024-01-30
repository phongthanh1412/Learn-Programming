#include <iostream>
#include <string.h>
using namespace std;
struct ngay 
{
    int day, month, year;
};
typedef struct ngay NGAY;
struct gio 
{
    int h, min, sec;
};
typedef struct gio TIME;
struct chuyenbay 
{
    char ma[5], from[100], to[100];
    NGAY ngaybay;
    TIME giobay;
};
typedef struct chuyenbay FLIGHT;
void nhapNgay (NGAY &a)
{
    cin >> a.day >> a.month >> a.year;
}
void xuatNgay (NGAY a)
{
    cout << a.day << "/" << a.month << "/" << a.year;
}
void nhapGio (TIME &b)
{
    cin >> b.h >> b.min >> b.sec;
}
void xuatGio (TIME b)
{
    cout << b.h<< "h" << b.min << "m" << b.sec << "s";
}
void nhapFlight (FLIGHT &c)
{
    cin >> c.ma;
    cin >> c.from;
    cin >> c.to;
    nhapNgay (c.ngaybay);
    nhapGio ( c.giobay);
}
void xuatFlight (FLIGHT c)
{
    cout << "FLIGHT: " << c.ma << endl;;
    cout << "From: " << c.from << endl;
    cout << "To: " <<c.to << endl;
    cout << "Date: ";
    xuatNgay (c.ngaybay);
    cout << endl;
    cout << "Time: ";
    xuatGio (c.giobay);
}
int main ()
{
    FLIGHT c;
    nhapFlight (c);
    xuatFlight (c);
    return 0;
}