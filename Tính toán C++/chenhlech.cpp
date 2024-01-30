#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;
#define max 30
void taoMangNgauNhien(int a[][max], int &m, int &n) {
	srand(time(0));
	for (int i = 0; i < m; i++) {
        for (int j = 0;j<n;j++) {
		    int num = -10 + rand() % 21;
            while (num==0) {
                num = -10 + rand() % 21;
            }
            a[i][j] = num;
        }

    }
	
}
void xuat (int a[][max], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
} 

void dem(int a[][max], int m, int n, int d, int c) {
    int duong_cot = 0;
    int am_cot = 0;
    int duong_dong = 0;
    int am_dong = 0;

    // dem trong cot
    for (int i=0; i<m; i++) {
        if (a[i][c] > 0) {
            duong_cot++;
        } else {
            am_cot++;
        }
    }

    // dem trong dong
    for (int i=0; i<n; i++) {
        if (a[d][i] > 0) {
            duong_dong++;
        } else {
            am_dong++;
        }
    }

    cout << chenhlech_cot << " " << chenhlech_dong << endl;

    for (int dong=0; dong<n; dong++) {
        for (int cot=0; cot<m; cot++) {
            if (abs(duong_cot - duong_dong) > 1 || abs(am_cot - am_dong) > 1) {
                int p = a[d][dong];
                int q = a[cot][c];

                if (p>0 && q<0) {
                    swap(a[d][dong], a[cot][c]);
                    duong_dong--;
                    am_cot++;
                } else if (p<0 && q>0) {
                    swap(a[d][dong], a[cot][c]);
                    duong_dong++;
                    am_cot--;
                }
            } 
        }
    }
}

int main (){
    int m = 0, n = 0;
    int d=0, c=0; 
    int a[max][max];
    cin >> m >> n;
    cin >> d >> c;
    taoMangNgauNhien (a,m,n);
    xuat(a,m,n);
    cout << endl;
    dem(a,m,n,d,c);
    xuat(a,m,n);
    
    

    return 0;
}
