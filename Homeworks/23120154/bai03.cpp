#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n = 0; cin >> n;
    int s = 0, p = 1;
    for (int i = 1; i <= n; i++){
        p *= i;
        s += p;
    }
    cout << s;
    return 0;
}
