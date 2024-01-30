#include <bits/stdc++.h>
#include <set>
using namespace std;
int main ()
{
    set <int> s;
    for (int i = 0; i < 40; i++)
    {
       s.insert(i);
    }
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    s.erase (32);
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << *s.begin () << endl;
 return 0;
}