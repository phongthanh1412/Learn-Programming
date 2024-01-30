#include <iostream>
using namespace std;
// khai bao list
struct node
{
    int data;
    struct node *pNext;
};
typedef struct node NODE;

struct list
{
  NODE *pHead;
  NODE *pTail;
};
typedef struct list LIST;
// khoi tao list
void KhoiTao (LIST &l)
{
    l.pHead = NULL;
    l.pTail = NULL;
}
//khoi tao 1 node
NODE *KhoiTaoNode (int x)
{
    NODE *p = new NODE;
    if (p == NULL )
    {
        cout << "Khong du bo nho de cap phat!";
        return NULL;
    }
    p -> data = x;
    p -> pNext = NULL;
    return p;
}
void AddHead (LIST &l, NODE *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else 
    {
        p -> pNext = l.pHead;
        l.pHead = p;
    }
}
void AddTail (LIST &l, NODE *p)
{
    if (l.pTail == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else 
    {
        l.pTail -> pNext = p;
        l.pTail = p;
    }
}


void getnode (LIST &l)
{
    int n; 
    cout << "Nhap so luong node can them:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cout << "Nhap gia tri data thu " << i + 1 << " : ";
        cin >> x;
        NODE *p = KhoiTaoNode (x);
        AddTail (l, p);
    }
    cout << "Danh sach lien ket don: ";
}
void XuatDS (LIST l)
{
    for (NODE *k = l.pHead; k != NULL; k = k -> pNext)
    {
        cout << k -> data << " ";
    }
}
int main ()
{
    LIST l;
    KhoiTao(l);
    XuatDS (l);

    return 0;
}