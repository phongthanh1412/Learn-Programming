#include <iostream>
#include <string>
using namespace std;
void chuyenChuoi(string str)
{
    getline(cin, str);
    string num = "";
    int cnt = 0;
    for (char c : str)
    {
        if (isdigit(c))
        {
            num += c;
            cnt++;
        }
        else
        {
            if (cnt != 0)
            {
                num += ' ';
                cnt = 0;
            }
        }
    }
    cout << num << endl;
}
int main()
{
    string str;
    chuyenChuoi(str);
    return 0;
}