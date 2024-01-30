#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float giagoc = 0, sothang = 0, laisuat = 0, per = 0, ser = 0;
    cin >> giagoc >> sothang >> laisuat >> per >> ser;
    float tien_1thang = (giagoc * (100 - per)) / (100 * 12) + (giagoc * laisuat / 100 * (100 - per)) / 100 + ser;
    float chenhlech = tien_1thang * 12 - (giagoc * (100 - per)) / 100;
    cout << fixed << setprecision(0) << "So tien tra moi thang: " << tien_1thang << endl;
    cout << fixed << setprecision(0) << "Chenh lech so voi khi mua dut tu ban dau: " << chenhlech;
    return 0;
}