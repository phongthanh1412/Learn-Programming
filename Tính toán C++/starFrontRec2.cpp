#include <iostream>
#include <time.h>

using namespace std;
#define max 30
void taoMangNgauNhien(int a[][max], int &m, int &n) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
        for (int j = 0;j<m;j++) {
		    int num = -900 + rand() % 1801;
            if(num==0)
               a[i][j] = num;
        }

    }
		
}
	

void xuat (int a[][max], int &m, int &n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
} 

void cot(int a[][max], int &m, int&n) {
    int vitricot = 0;
    int vitridong = 0;
    int max_count = 0;
    int max_count2 = 0;

    for (int i=0; i<n; i++) {
        int count = 0;
        for (int j=0; j<m; j++) {
            if (a[j][i] < 0) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            vitricot = i;
        }
    }

    for (int i=0; i<m; i++) {
        int count = 0;
        for (int j=0; j<n; j++) {
            if (a[i][j] < 0) {
                count++;
            }
        }

        if (count > max_count2) {
            max_count2 = count;
            vitridong = i;
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (j==vitricot || i==vitridong) {
                cout << "*" << a[i][j] << " ";
            } else {
                cout << a[i][j] << " ";
            }
        }

        cout << endl;
    }


}

int main (){
    int m = 0, n = 0;
    int num=0;
    int a[max][max];
    cin >> m >> n;
    taoMangNgauNhien (a,m,n);
    xuat(a,m,n);
    cout << endl;
    cot(a,m,n);
    

    return 0;
}