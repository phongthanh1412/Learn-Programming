#include <iostream>
using namespace std;

// Hàm để cộng hai số có một chữ số và trả về kết quả có một chữ số
int add_one_digit(int x, int y)
{
    int sum = x + y; // Tính tổng hai số
    while (sum >= 10)
    {                              // Nếu tổng có hai chữ số
        sum = sum / 10 + sum % 10; // Cộng lại hai chữ số của tổng
    }
    return sum; // Trả về kết quả có một chữ số
}

// Hàm để giảm mảng đi một nửa theo yêu cầu
void reduce_array(int a[], int &n)
{
    int i = 0;   // Biến chỉ số cho mảng a
    int j = 0;   // Biến chỉ số cho mảng b
    int b[1000]; // Mảng b để lưu kết quả
    while (i < n - 1)
    {                                         // Lặp cho đến khi i đạt đến phần tử cuối cùng hoặc gần cuối của mảng a
        b[j] = add_one_digit(a[i], a[i + 1]); // Cộng hai phần tử liền kề của mảng a và lưu vào mảng b
        i += 2;                               // Tăng i lên 2 đơn vị
        j++;                                  // Tăng j lên 1 đơn vị
    }
    if (i == n - 1)
    {                // Nếu số phần tử của mảng a là lẽ
        b[j] = a[i]; // Lấy phần tử cuối cùng của mảng a và lưu vào mảng b
        j++;         // Tăng j lên 1 đơn vị
    }
    n = j; // Cập nhật số phần tử của mảng a bằng số phần tử của mảng b
    for (i = 0; i < n; i++)
    {                // Lặp qua các phần tử của mảng b
        a[i] = b[i]; // Gán các phần tử của mảng b vào mảng a
    }
}

// Hàm để cộng hai mảng có cùng số phần tử và tạo thành mảng mới
void add_arrays(int a[], int b[], int c[], int n)
{
    int i = 0;   // Biến chỉ số cho các mảng
    int j = 0;   // Biến chỉ số cho mảng d
    int d[2000]; // Mảng d để lưu kết quả
    while (i < n)
    {                                     // Lặp cho đến khi i đạt đến phần tử cuối cùng của các mảng
        d[j] = add_one_digit(a[i], b[i]); // Cộng hai phần tử tương ứng của mảng a và b và lưu vào mảng d
        i++;                              // Tăng i lên 1 đơn vị
        j++;                              // Tăng j lên 1 đơn vị
        if (d[j - 1] >= 10)
        {                             // Nếu phần tử vừa lưu vào mảng d có hai chữ số
            d[j] = d[j - 1] / 10;     // Lấy chữ số hàng chục và lưu vào mảng d
            d[j - 1] = d[j - 1] % 10; // Lấy chữ số hàng đơn vị và gán lại cho phần tử trước đó của mảng d
            j++;                      // Tăng j lên 1 đơn vị
        }
    }
    n = j; // Cập nhật số phần tử của mảng c bằng số phần tử của mảng d
    for (i = 0; i < n; i++)
    {                // Lặp qua các phần tử của mảng d
        c[i] = d[i]; // Gán các phần tử của mảng d vào mảng c
    }
}

// Hàm để in mảng ra màn hình
void print_array(int a[], int n)
{
    cout << "{"; // In dấu ngoặc mở
    for (int i = 0; i < n; i++)
    {                 // Lặp qua các phần tử của mảng
        cout << a[i]; // In phần tử hiện tại
        if (i < n - 1)
        {                 // Nếu không phải phần tử cuối cùng
            cout << ", "; // In dấu phẩy và khoảng trắng
        }
    }
    cout << "}"; // In dấu ngoặc đóng
}

int main()
{
    int a[1000];                             // Mảng a
    int b[1000];                             // Mảng b
    int c[2000];                             // Mảng c
    int n;                                   // Số phần tử của mảng a và b
    cout << "Nhap so phan tu cua mang a: ";  // Yêu cầu nhập số phần tử của mảng a
    cin >> n;                                // Nhập số phần tử của mảng a
    cout << "Nhap cac phan tu cua mang a: "; // Yêu cầu nhập các phần tử của mảng a
    for (int i = 0; i < n; i++)
    {                // Lặp qua các phần tử của mảng a
        cin >> a[i]; // Nhập phần tử hiện tại của mảng a
    }
    cout << "Nhap cac phan tu cua mang b: "; // Yêu cầu nhập các phần tử của mảng b
    for (int i = 0; i < n; i++)
    {                // Lặp qua các phần tử của mảng b
        cin >> b[i]; // Nhập phần tử hiện tại của mảng b
    }
    cout << "Mang a ban dau la: ";                  // In mảng a ban đầu
    print_array(a, n);                              // Gọi hàm in mảng a
    cout << "\n";                                   // Xuống dòng
    reduce_array(a, n);                             // Gọi hàm giảm mảng a đi một nửa
    cout << "Mang a sau khi bien doi la: ";         // In mảng a sau khi biến đổi
    print_array(a, n);                              // Gọi hàm in mảng a
    cout << "\n";                                   // Xuống dòng
    add_arrays(a, b, c, n);                         // Gọi hàm cộng hai mảng a và b tạo thành mảng c
    cout << "Mang c duoc tao thanh tu a va b la: "; // In mảng c
    print_array(c, n);                              // Gọi hàm in mảng c
    cout << "\n";                                   // Xuống dòng
    return 0;                                       // Kết thúc chương trình
}