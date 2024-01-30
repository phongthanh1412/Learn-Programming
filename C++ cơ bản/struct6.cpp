#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct doanhnghiep 
{
   char madn [30];
   char giamdoc [30];
   float vondieule;
   int sonhanvien;
};
void nhap1DN (doanhnghiep &dn)
{
   cout << "\n\nNHAP MADN: " << endl;
   fflush (stdin);
   gets (dn.madn);
   cout << "GIAM DOC: " << endl;
   fflush (stdin);
   gets (dn.giamdoc);
   cout << "VON DIEU LE: " << endl;
   cin >> dn.vondieule;
   cout << "SO NHAN VIEN: " << endl;
   cin >> dn.sonhanvien;
}
void xuat1DN (doanhnghiep dn)
{
   cout << "\n\nMADN: " << dn.madn << endl;
   cout << "GIAM DOC: " << dn.giamdoc << endl;
   cout << "VON DIEU LE: " << dn.vondieule << endl;
   cout << "SO NHAN VIEN: " << dn.sonhanvien << endl;	
}	
void sapxep (doanhnghiep ds[], int n)
{
	doanhnghiep tmp;
   for (int i = 0; i < n -1; i++)
   {
     for (int j = i + 1; j < n; j++)
     {
	   if (ds[i].vondieule > ds[j].vondieule)
	   {
	      tmp = ds[i];
	      ds[i] = ds[j];
	      ds[j] = tmp;
	   }
	 }
   }
}
void nhapDS (doanhnghiep ds[], int n)
{
   for (int i = 0; i < n; i++)
   {
     nhap1DN(ds[i]);
   }
}
void xuatDS (doanhnghiep ds[], int n)
{
   for (int i = 0; i < n; i++)
   {
     xuat1DN(ds[i]);
   } 
}
void indn (doanhnghiep dn)
{
	cout << "MDN: " << endl;
	cout << "SO NHAN VIEN: " << endl;
}
void inmdn(doanhnghiep ds[], int n)
{
   for (int i = 0; i < n; i++)
   {
     if (ds[i].sonhanvien > 300 && ds[i].madn[0] == 'D' && ds[i].madn[1] == 'N')
     {
	   indn(ds[i]);
	 }
   }
}
int KiemtraDauCach (char madn[])
{
   for (int i = 0; i < strlen (madn); i++)
   {
      if (madn[i] == ' ')
        return 1;
   }
   return 0;
}
void demKhongHop (doanhnghiep ds[], int n)
{
   int dem = 0;
   for (int i = 0; i < n; i++)
   {
      if (ds[i].vondieule < 10 || KiemtraDauCach (ds[i].madn) == 1)
         dem ++;
   }
   cout << "\nSO DOANH NGHIEP KHONG HOP LE" << dem << endl;
}
int main ()
{
	doanhnghiep dsDN[100];
	int n;
	cout << "NHAP n: " << endl;
	cin >> n;
	nhapDS(dsDN, n);
	cout << "\nDANH SACH VUA NHAP LA: " << endl;
	xuatDS(dsDN, n);
	sapxep(dsDN, n);
	cout << "\nDANH SACH SAU KHI SAP XEP LA: " << endl;
	xuatDS(dsDN, n);
	cout << "\nDOANH NGHIEP TREN 300 NHAN VIEN VA MDN BAT DAU BANG 'DN'\n: " << endl;
	inmdn(dsDN, n);
   demKhongHop (dsDN, n);
	return 0;
}









