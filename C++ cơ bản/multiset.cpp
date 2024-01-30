#include <bits/stdc++.h>
#include <set>
using namespace std;
int main ()
{
    multiset <int> ms;
    ms.insert (200);
    ms.insert (342);
    ms.insert (400);
    ms.insert (321);
    ms.insert (200);
    ms.insert (200);
    cout << ms.size () << endl;
    for (int x : ms)
    {
        cout << x << " ";
    }
    cout << ms.count (200) << endl;
    return 0;
}