#include<iostream>
#define max 30
using namespace std;

void scan(int a[][max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void print(int a[][max], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) 
                swap(a[i], a[j]);
        }
    }
}

void square(int a[][max], int n) {
    int b[4 * max];
    int k = 0;

    for (int i = n - 2; i > 0; i--) {
        b[k++] = a[i][0];
    }
    for (int i = 0; i < n; i++) {
        b[k++] = a[0][i];
    }
    for (int i = 1; i < n - 1; i++) {
        b[k++] = a[i][n - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        b[k++] = a[n - 1][i];
    }

    sort(b, k);

    k = 0;

    for (int i = n - 2; i > 0; i--) {
        a[i][0] = b[k++];
    }
    for (int i = 0; i < n; i++) {
        a[0][i] = b[k++];
    }
    for (int i = 1; i < n - 1; i++) {
        a[i][n - 1] = b[k++];
    }
    for (int i = n - 1; i >= 0; i--) {
        a[n - 1][i] = b[k++];
    }
}

int main() {
    int n = 0;
    cin >> n;
    int a[max][max];
    scan(a, n);
    square(a, n);
    cout << "Ma tran sau khi sap xep bien la\n";
    print(a, n);
    return 0;
}
