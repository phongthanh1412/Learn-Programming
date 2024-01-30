#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int year = 0;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "Nam " << year << " la nam nhuan!";
    }
    else cout << "Nam " << year << " khong la nam nhuan!";
    return 0;
}