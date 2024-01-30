#include<iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int tmp = a;
    a = b;
    b = tmp;
    cout << a << " " << b;
    return 0;
}