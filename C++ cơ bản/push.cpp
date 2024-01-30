#include <iostream>
#include <queue>
using namespace std;
int main ()
{
    queue <int> ds;
    ds.push (34);
    ds.push (23);
    ds.push (12);
    ds.push (57);
    cout << ds.front() << endl;
    cout << ds.back() << endl;

}