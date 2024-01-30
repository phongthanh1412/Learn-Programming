   
#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n = 0; cin >> n;
    int k = n;
    int cnt = 0, cnt1 = 0, cnt2 = 0;
    while (k > 0){
        k /= 10;
        cnt++;
    }
    while (n > 0){
        k = n % 10;
        if (k % 2 == 0){
            cnt1++;
        }
        else if (k % 2 != 0){
            cnt2++;
        }
        n /= 10;
    }


    if (cnt1 == cnt) cout << "Toan chan";
    else if (cnt2 == cnt) cout << "Toan le";
    else if (cnt1 != cnt || cnt2 != cnt) cout << "Khong toan chan hay toan le";


    return 0;
}

