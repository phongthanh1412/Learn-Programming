#include<iostream>
using namespace std;
int main() {
    float a = 0, b = 0;
    cin >> a >> b;
    float chuvi = (a + b) * 2;
    float dientich = a * b;
    cout << chuvi << "\n" << dientich << endl;
    if (a == b) cout << "Hinh chu nhat la hinh vuong!";
    return 0;
}