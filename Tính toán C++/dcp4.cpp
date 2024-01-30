#include <iostream>
#include <algorithm>
using namespace std;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void solve(int a[], int n) {
    int min = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == min)
            min++;
        else if (a[i] > min)
            break;
    }
    cout << min;
}

int main() {
    int n = 0; cin >> n;
    int a[20];
    nhap(a, n);
    sort (a, a + n);
    solve(a, n);
    return 0;
}