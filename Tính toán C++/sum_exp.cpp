#include <iostream>
using namespace std;
int main (){
    int n = 0, sum = 0, cnt = 0;
    cin >> n;
    int k = n;
    
    while (k > 0){
        k /= 10;
        cnt++;
    }
    while (n > 0){
        int tich = 1;
        int tam = n % 10;
        for (int i = 1; i <= cnt; i++){
            tich *= tam;
        }
        sum += tich;
        n /= 10;
        cnt--;
    }
    cout << sum;
    return 0;
}
// tính tổng các chữ số theo số mũ
     