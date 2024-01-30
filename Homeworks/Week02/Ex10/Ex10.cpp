#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float sotien = 0, laisuat = 0;
    cin >> sotien >> laisuat;
    float tienlai_12 = sotien * laisuat;
    float tienlai_1 = sotien * laisuat * 1 / 12;
    float tongtien = sotien + tienlai_12;
    cout << fixed << setprecision(0) << "Tien lai sau 12 thang: " << tienlai_12 << endl;
    cout << fixed << setprecision(0) << "Tien lai sau 1 thang: " << tienlai_1 << endl;
    cout << fixed << setprecision(0) << "Tong tien sau 12 thang: " << tongtien << endl;
    return 0;
}