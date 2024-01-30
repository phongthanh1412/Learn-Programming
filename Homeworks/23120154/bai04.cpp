#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n = 0; cin >> n;
    int sum = 0;
    int k = 1;
    for (; sum + k + 1 <= n; k++){
        sum += k;
    }
    cout << k;
    return 0;
}
