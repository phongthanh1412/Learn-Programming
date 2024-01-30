#include <iostream>
using namespace std;
#define max 30
void nhap (int a[][max], int &m, int &n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}
void danhSoBienHinhChuNhat(int a[][max], int m, int n) {

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            a[i][j] = 0;
        }
    }

    int counter = 1;
    
    for (int i=n-1; i>=0; i--) {
        a[m-1][i] = counter;
        counter++;
    }

    for (int i=m-2; i>=0; i--) {
        a[i][0] = counter;
        counter++;
    }

    for (int i=1; i<n; i++) {
        a[0][i] = counter;
        counter++;
    }

    for (int i=1; i<m-1; i++) {
        a[i][n-1] = counter;
        counter++;
    }

}

int main() {
    int m=0,n=0;
    cin >> m >> n;
    int a[max][max];
    // nhap (a,m,n);
    danhSoBienHinhChuNhat(a, m, n);

    // In mảng đã đámh số
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
