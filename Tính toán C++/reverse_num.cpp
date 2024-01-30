#include <iostream>
using namespace std;
int main (){
    int n = 0; 
    cin >> n;
    int re_num = 0;
    while (n != 0){
        int sodu = n % 10;
        re_num = re_num*10 + sodu;
        n /= 10;
    }
    cout << re_num;
    return 0;
}
// in ra số ngược của n
     