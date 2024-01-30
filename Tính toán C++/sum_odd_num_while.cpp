#include <iostream>
using namespace std;
int main (){
    int n = 0; 
    cin >> n;
    int sodu = 0, sum = 0;
    while (n != 0){
        sodu = n % 10;
        if (sodu % 2 != 0)
        sum += sodu;
        n /= 10;
    }
    cout << sum;
    return 0;
}
// tổng các chữ số lẻ của số n theo vòng wwhile
     