#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int congBoi(int a[], int n)
{
    int s = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i + 1] / a[i] == a[i] / a[i - 1])
        {
            s = a[i + 1] / a[i];
            continue;
        }
        else
        {
            break;
            return 0;
        }
    }
    return s;
}
int main()
{
    int n = 0;
    cin >> n;
    int a[20];
    nhap(a, n);
    cout << congBoi(a, n);
    return 0;
}