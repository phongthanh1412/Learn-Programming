#include <iostream>
#include <stdio.h>

using namespace std;

struct sinhvien
{
	char masv[15];
	char hoten[20];
	char gioitinh[5];
	int tuoi;
	float diem;
	};
	
void nhapSV (sinhvien &sv1){


 cout << "Nhap masv: ";
 fflush (stdin);
 gets (sv1.masv);
 cout << "Nhap hoten:";
 fflush (stdin);
 gets (sv1.hoten);
 cout << "Nhap gioitinh:";
 fflush (stdin);
 gets (sv1.gioitinh);
 cout << "Nhap tuoi:";
 fflush (stdin);
 cin >> (sv1.tuoi);
 cout << "Nhap diem:";
 cin >> (sv1.diem);


}
void xuatSV (sinhvien &sv1){

cout << "Masv: " <<sv1.masv << endl;
cout << "Hoten: " <<sv1.hoten << endl;
cout << "Gioitinh: " <<sv1.gioitinh << endl;
cout << "Tuoi: " <<sv1.tuoi << endl;
cout << "Diem: " <<sv1.diem;


}

void nhapdanhsach (sinhvien a[], int n){

for (int i = 0; i < n; i++){
nhapSV (a[i]);

}
  

}

void xuatdanhsach (sinhvien a[], int n){

 for (int i = 0; i < n; i++){
   
    xuatSV (a[i]);
 }


}
int main ()
{

 sinhvien a[100];
 int n;
 cout << "Nhap n = ";
 cin >> n;
 nhapdanhsach (a, n);
 xuatdanhsach (a, n);

return 0;
}

