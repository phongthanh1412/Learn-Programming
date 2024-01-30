#include <iostream>
using namespace std;
int main (){
    int n = 0; 
    cin >> n;
    int sodu = 0, sum = 0;
    for (int i = n; i > 0; i /= 10){
        if (i % 2 == 0)
        continue;
        sodu = i % 10;
        sum += sodu;
    }
    cout << sum;
    return 0;
}
// tổng các chữ số lẻ của số n theo vòng for