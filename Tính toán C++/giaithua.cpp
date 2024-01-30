#include <iostream>
using namespace std;
int giaithua(int n)
{
    if(n==0)
      return 1;
    else 
      return n*giaithua(n-1);
}
int main ()
{
    cout << "GIAI THUA CUA 5: " << giaithua(5);
    return 0;
}
