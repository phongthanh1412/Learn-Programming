#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
bool check(int a[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
                return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n = 0;
    cin >> n;
    int k = 0;
    cin >> k;
    int a[30];
    nhap(a, n);
    if (check(a, n, k))
    {
        cout << "True";
    }
    else
        cout << "False";
    return 0;
}