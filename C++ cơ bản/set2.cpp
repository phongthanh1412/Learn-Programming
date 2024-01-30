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
    cout << s.size () << endl;
    if (s.count(45) != 0)
    {
        cout << "Found! \n"; 
    }
    else 
    {
        cout << "Not Found!\n";
    }

 return 0;
}