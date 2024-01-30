#include <iostream>
using namespace std;
void solve (){
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x % 2 == 1){
            sum += x;
        }
    }
    if (sum % 2 != 0){
        cout << "NO";
    } else {
        cout << "YES";
    }
}
int main (){
    int t; cin >> t;
    while (t--){
        solve ();
    }
    return 0;
}