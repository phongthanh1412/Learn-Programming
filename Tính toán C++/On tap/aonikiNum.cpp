#include <iostream>
#define max 30
using namespace std;

bool isDaiCa(int a[][max], int n, int i, int j)
{
    // Lấy giá trị của phần tử hiện tại
    int value = a[i][j];
    // Kiểm tra xem nó có lớn hơn các phần tử trên, dưới, trái, phải hay không
    // Nếu có bất kỳ phần tử nào nhỏ hơn hoặc bằng nó, trả về 0
    if (i > 0 && a[i - 1][j] >= value)
        return 0;
    if (i < n - 1 && a[i + 1][j] >= value)
        return 0;
    if (j > 0 && a[i][j - 1] >= value)
        return 0;
    if (j < n - 1 && a[i][j + 1] >= value)
        return 0;
    // Nếu không, trả về true
    return true;
}

// Hàm để in ra tất cả các số đại ca có trong ma trận
void inDaiCa(int a[][max], int n)
{
    // Duyệt qua tất cả các phần tử trong ma trận
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Nếu phần tử hiện tại là số đại ca, in ra giá trị và vị trí của nó
            if (isDaiCa(a, n, i, j))
            {
                cout << a[i][j] << " ";
            }
        }
    }
}
int main()
{
    int n = 0;
    cin >> n;
    int a[max][max];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    inDaiCa(a, n);
    return 0;
}
