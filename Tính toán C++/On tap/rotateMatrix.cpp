#include <iostream>
#define max 30
using namespace std;
void scan(int a[][max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
// Hàm kiểm tra ma trận có phải là ma phương hay không
bool isMagicSquare(int a[][max], int n) {
    // Tính tổng đường chéo chính
    int sum1 = 0;
    for (int i = 0; i < n; i++)
        sum1 += a[i][i];

    // Tính tổng đường chéo phụ
    int sum2 = 0;
    for (int i = 0; i < n; i++)
        sum2 += a[i][n - i - 1];

    // Kiểm tra nếu tổng hai đường chéo khác nhau thì trả về false
    if (sum1 != sum2)
        return false;

    // Tính tổng các hàng và cột
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += a[i][j];
            colSum += a[j][i];
        }

        // Kiểm tra nếu tổng hàng hoặc cột khác tổng đường chéo thì trả về false
        if (rowSum != sum1 || colSum != sum1)
            return false;
    }

    // Nếu tất cả các điều kiện trên đều thỏa mãn thì trả về true
    return true;
}

// Hàm xoay ma trận 180 độ
void rotate180(int a[][max], int n) {
    // Đảo ngược các hàng
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            swap(a[i][j], a[n - i - 1][j]);
        }
    }

    // Đảo ngược các cột
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(a[i][j], a[i][n - j - 1]);
        }
    }
}

// Hàm xoay ma trận 90 độ ngược chiều kim đồng hồ
void rotate90(int a[][max], int n) {
    
    // Chuyển vị ma trận ngược chiều kim đồng hồ
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    //// Đảo ngược các cột
    //for (int i = 0; i < n; i++) {
    //    for (int j = 0; j < n / 2; j++) {
    //        swap(a[i][j], a[i][n - j - 1]);
    //    }
    //}
    // Đảo ngược các hàng 
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            swap(a[i][j], a[n - i - 1][j]);
        }
    }
}

void print(int a[][max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int a[max][max];
    int n = 0; cin >> n;
    scan(a, n);
    if (isMagicSquare(a, n)) {
        cout << "Ma tran la ma phuong, xoay 180 do:\n";
        rotate180(a, n);
    }
    else {
        cout << "Ma tran khong phai la ma phuong, xoay 90 do nguoc chieu kim dong ho:\n";
        rotate90(a, n);
    }
    print(a, n);
    return 0;
}

