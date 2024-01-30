#include <iostream>
#include <math.h>
using namespace std;
double Q(double x, int n)
{
    double T = sqrt (exp(x) + n);
    for (int i = 1; i <= n; i++)
    {
        T = T + (x/pow(5, i));
    }
    return T;
}
int main ()
{
    int n;
    double x;
    cout << "NHAP n: ";
    cin >> n;
    cout << "NHAP x: ";
    cin >> x;
    cout << "GIA TRI Q = " << Q(x, n);
    return 0;
}
