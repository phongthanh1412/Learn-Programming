#include <iostream>
using namespace std;
// Hằng số đại diện số lượng dòng và cột tối đa
const int M = 100;
const int N = 100;

// Hàm chuyển ma trận sang mảng một chiều
bool convertMatrixToArray(int a[M][N], int m, int n, int b[], int& k) {
    // Kiểm tra xem số dòng và số cột có vượt quá giới hạn hay không
    if (m > M || n > N) {
        // Nếu có, trả về false và in ra thông báo lỗi
        cout << "Error! The number of rows or columns exceeds the limit." << endl;
        return false;
    }
    // Nếu không, duyệt qua các phần tử của ma trận
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Gán phần tử ma trận vào mảng một chiều theo công thức
            b[i * n + j] = a[i][j];
        }
    }
    // Cập nhật giá trị của k bằng số lượng phần tử của mảng một chiều
    k = m * n;
    // Trả về true
    return true;
}

// Hàm main
int main() {
    // Khai báo ma trận và mảng một chiều
    int a[M][N], b[M * N];
    // Khai báo số dòng, số cột và số lượng phần tử của mảng một chiều
    int m, n, k;
    // Gán giá trị cho số dòng và số cột
    m = 2;
    n = 3;
    // Gán giá trị cho ma trận
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;
    // Gọi hàm chuyển ma trận sang mảng một chiều
    bool result = convertMatrixToArray(a, m, n, b, k);
    // Kiểm tra kết quả trả về của hàm
    if (result) {
        // Nếu thành công, in ra mảng một chiều
        cout << "The array is: " << endl;
        for (int i = 0; i < k; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    // Kết thúc chương trình
    return 0;
}

