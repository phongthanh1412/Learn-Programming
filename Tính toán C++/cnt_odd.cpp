#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n = 0; 
    cin >> n;
    if (n < 0) n *= (-1);
    int i = n;
    int count = 0;
    while (i > 0){
        int tam = i % 10;
        if (i % 2 != 0) 
         count++;
        i /= 10;
    }
    cout << count;
    return 0;
}
// đếm số chữ số lẽ
     