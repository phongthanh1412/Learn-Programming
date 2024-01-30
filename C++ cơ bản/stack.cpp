#include <iostream>
#include <stack>
using namespace std;
int main ()
{
    stack <int> dayso;
    dayso.push (12);
    dayso.push (14);
    dayso.push (13);
    dayso.push (16);
    cout << "SIZE CUA STACK LA: " << dayso.size () << endl;
    cout << "STACK RONG KHONG: " << dayso.empty () << endl;
    dayso.pop ();
    cout << dayso.top ();
    return 0;
}
