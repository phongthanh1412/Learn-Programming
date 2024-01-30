#include <iostream>
#define max 30
using namespace std;
void scan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
void printDiffer(int a[], int n) {
    sort(a, n);
    for (int i = 0; i < n; i++) {
        if (a[i] != a[i - 1])
             cout << a[i] << " ";
    }
}
int main() {
    int n = 0;
    cin >> n;
    int a[max];
    scan(a, n);
    printDiffer(a, n);
    return 0;
}
