#include <bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int n, score = 0; cin >> n;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                char c;
                cin >> c;
                if (c == 'X') score += min ({i, 9 - i, j, 9 - j}) + 1;
            }
        }
        cout << score << endl;
    }
    return 0;
}