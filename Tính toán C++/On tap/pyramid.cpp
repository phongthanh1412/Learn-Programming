#include <iostream>
using namespace std;

void print_pyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << "  ";
        }
        for (int k = i; k <= n; k++) {
            cout << k << " ";
        }
        for (int l = n - 1; l >= i; l--) {
            cout << l << " ";
        }
        cout << endl;
    }
}
int main() {
    int n = 0;
    cin >> n;
    print_pyramid(n);
    return 0;
}
