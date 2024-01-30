#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n = 0, m = 0; 
    cin >> n >> m;
    while (m >= 10){
        // if (m < 10)
        // break;
        m /= 10;
    }
    int sum = 0;
    while (n > 0){
        int somu = n % 10;
        sum += pow (m, somu);
        n /= 10;
    }
    cout << sum;
    return 0;
}
// tính tổng chữ số đầu tiên theo số mũ
     