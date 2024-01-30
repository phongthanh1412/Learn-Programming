#include <bits/stdc++.h>
#include <set>
using namespace std;
int main ()
{
    int n; 
    cout << "NHAP n: ";
    cin >> n;
    set <string> s;
    cin.ignore ();
    for (int i = 0; i < n; i++)
    {
        string str; 
        getline (cin, str);
        s.insert (str);
    }
    cout << "SO PHAN TU KHAC NHAU LA: " << s.size () << endl;

 return 0;
}