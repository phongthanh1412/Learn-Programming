#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){

    ll t; cin >> t;
    while (t--){
        ll maxi, mex, sum = 0, n;
        cin >> n >> mex >> maxi;
        if ((mex - maxi > 1) || (n < mex)){
                cout << -1 << "\n";
                continue;
        } 
        if (maxi == mex) maxi--;
        for (ll i = 0; i < n; i++){
                if (maxi > i) sum += i;
                else sum += maxi;
        }
        cout << sum << "\n";
    }
    return 0;
}