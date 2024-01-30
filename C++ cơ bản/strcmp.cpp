#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int res;
    
    char str1[] = "Albert";
    char str2[] = "Thomas" ;
    res = strcmp (str1, str2);
    if (res != 0) 
      cout << "Hai chuoi " << str1 << " va " << str2 << " khac nhau!";
    else 
      cout << "Hai chuoi " << str1 << " va " << str2 << " giong nhau!";
    return 0;
    
}