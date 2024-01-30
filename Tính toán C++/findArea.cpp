#include <iostream>
#include <math.h>
using namespace std;
struct diem 
{
    float x, y;
};
typedef struct diem DIEM;
struct tamgiac 
{
    DIEM A, B, C;
};
typedef struct tamgiac TAMGIAC;
void nhapDiem (DIEM &a)
{
    cin >> a.x >> a.y;
}
void xuatDiem (DIEM a)
{
    cout << a.x << " " << a.y << endl;;
}
float findDistance (DIEM P, DIEM Q)
{
    return sqrt (pow((P.x - Q.x), 2) + pow((P.y - Q.y), 2));
}
void nhapTamGiac (TAMGIAC &x)
{
    nhapDiem (x.A);
    nhapDiem (x.B);
    nhapDiem (x.C);
}
void xuatTamGiac (TAMGIAC x)
{
    xuatDiem (x.A);
    xuatDiem (x.B);
    xuatDiem (x.C);  
}

float Area (TAMGIAC x)
{
    float a = findDistance (x.B, x.C);
    float b = findDistance (x.C, x.A);
    float c = findDistance (x.A, x.B);
    float p = (a + b + c) / 2;
    float s = sqrt (p * (p - a) * (p - b) * (p - c));
    return s;
}
int main ()
{
    
    TAMGIAC T;
    nhapTamGiac (T);
    float s = Area (T);
    cout << s;
    return 0;
}