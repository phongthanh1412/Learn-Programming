#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n = 0;
    cin >> n;
    float p = 1;
    for (int i = 2; i <= n; i++){
        p += (float) 1 / ((i - 1)*i);
    }
    cout << p;
    return 0;
}
