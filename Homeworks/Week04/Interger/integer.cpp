#include<iostream>
#include<math.h>
using namespace std;
    //Liệt kê các ước số của n
void lietKe1(int n) {
    cout << "Cac uoc so cua n: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
    //Tổng các ước số của n
int Tong1(int n) {
    int sum1 = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum1 += i;
        }
    }
    return sum1;
}
    // Tích các ước số của n
int Tich1(int n) {
    int p1 = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            p1 *= i;
        }
    }
    return p1;
}
    // Số lượng ước số của n
int Dem1(int n) {
    int cnt1 = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt1++;
        }
    }
    return cnt1;
}
    //Số lượng ước số lẻ của n
void lietKe2(int n) {
    cout << "Cac uoc so le cua n: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}
    //tổng tất cả các ước số chẵn của n
int Tong2(int n) {
    int sum2 = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            sum2 += i;
        }
    }
    return sum2;
}
    //tích tất cả các ước số lẻ của n
int Tich2(int n) {
    int p2 = 1;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 1) {
            p2 *= i;
        }
    }
    return p2;
}
    //Đếm số lượng ước số chẵn của n
int Dem2(int n) {
    int dem2 = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            dem2++;
        }
    }
    return dem2;
}
     //tổng các ước số nhỏ hơn n
int Tong3(int n) {
    int sum3 = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum3 += i;
        }
    }
    return sum3;
    // Tìm ước số lẻ lớn nhất của n
}int Tim1(int n) {
    int maxi = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 1) {
            if (i > maxi)
                maxi = i;
        }
    }
    return maxi;
}
    //Kiểm tra số hoàn thiện
bool kiemTra1(int n) {
    int sumPerfect = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sumPerfect += i;
        }
    }
    if (sumPerfect == n)
        return 1;
    else return 0;
}
    //Hàm kiểm tra nguyên tố
bool kiemTra2(int n) {
    int cnt = 0;
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 0)
        return 1;
    return 0;
}
//Hàm kiểm tra chính phương
bool kiemTra3(int n) {
    int i = sqrt(n);
    if (i * i == n)
        return 1;
    return 0;
}
//Hàm kiểm tra đối xứng
bool kiemTra4(int n) {
    int tmp = n, sum = 0;
    while (n > 0) {
        int surplus = n % 10;
        sum = sum * 10 + surplus;
        n /= 10;
    }
    if (sum == tmp)
        return 1;
    return 0;
}
//giá trị nguyên dương k lớn nhất sao cho S(k) = 1+2+3+…+k < n 
int Tim2(int n) {
    int sum = 0;
    int k = 1;
    while (sum < n) {
        k++;
        sum += k;
    }
    return k - 1;
}
//tổng các chữ số của số nguyên dương n
int Tong4(int n) {
    int sum4 = 0;
    while (n > 0) {
        int surplus = n % 10;
        sum4 += surplus;
        n /= 10;
    }
    return sum4;
}
//tích các chữ số của số nguyên dương n
int Tich3(int n) {
    int p3 = 1;
    while (n > 0) {
        int surplus = n % 10;
        p3 *= surplus;
        n /= 10;
    }
    return p3;
}
//số lượng chữ số lẻ của số nguyên dương n
int Dem3(int n) {
    int cnt3 = 0;
    while (n > 0) {
        int surplus = n % 10;
        if (surplus % 2 == 1)
            cnt3++;
        n /= 10;
    }
    return cnt3;
}
//tổng các chữ số chẵn của số nguyên dương n
int Tong5(int n) {
    int sum5 = 0;
    while (n > 0) {
        int surplus = n % 10;
        if (surplus % 2 == 0)
            sum5+=surplus;
        n /= 10;
    }
    return sum5;
}
//tích các chữ số lẻ của số nguyên dương n
int Tich4(int n) {
    int p4 = 1;
    while (n > 0) {
        int surplus = n % 10;
        if (surplus % 2 == 1)
            p4 *= surplus;
        n /= 10;
    }
    return p4;
}
//tìm chữ số đầu tiên của n
int Tim3(int n) {
    int s = 0;
    while (n > 0) {
        int surplus = n % 10;
        s = surplus;
        n /= 10;
    }
    return s;
}
//số đảo ngược của số nguyên dương n
int Tim4(int n) {
    int tmp = n, sum = 0;
    while (n > 0) {
        int surplus = n % 10;
        sum = sum * 10 + surplus;
        n /= 10;
    }
    return sum;
}
//chữ số lớn nhất của số nguyên dương n
int Tim5(int n) {
    int maxi = 0;
    while (n > 0) {
        int surplus = n % 10;
        if (surplus > maxi)
            maxi = surplus;
        n /= 10;
    }
    return maxi;
}
//chữ số nhỏ nhất của số nguyên dương n
int Tim6(int n) {
    int mini = 1e9;
    while (n > 0) {
        int surplus = n % 10;
        if (surplus < mini)
            mini = surplus;
        n /= 10;
    }
    return mini;
}
//Đếm số lượng chữ số lớn nhất của n
int Dem4(int n) {
    int s = Tim5(n);
    int cnt4 = 0;
    while (n > 0) {
        int surplus4 = n % 10;
        if (surplus4 == s)
            cnt4++;
        n /= 10;
    }
    return cnt4;
}
//Đếm số lượng chữ số nhỏ nhất của n
int Dem5(int n) {
    int s = Tim6(n);
    int cnt5 = 0;
    while (n > 0) {
        int surplus5 = n % 10;
        if (surplus5 == s)
            cnt5++;
        n /= 10;
    }
    return cnt5;
}
//Đếm số lượng chữ số đầu tiên của n
int Dem6(int n) {
    int s = Tim3(n);
    int cnt6 = 0;
    while (n > 0) {
        int surplus6 = n % 10;
        if (surplus6 == s)
            cnt6++;
        n /= 10;
    }
    return cnt6;
}
//Kiểm tra n có phải toàn chữ số lẻ hay không
bool kiemTra5(int n) {
    while (n > 0) {
        int surplus = n % 10;
        if (surplus % 2 == 0)
            return 0;
        n /= 10;
    }
    return 1;
}
//Kiểm tra n có phải toàn chữ số chẵn hay không
bool kiemTra6(int n) {
    while (n > 0) {
        int surplus = n % 10;
        if (surplus % 2 == 1)
            return 0;
        n /= 10;
    }
    return 1;
}
//Kiểm tra các chữ số của n có tăng dần từ trái sang phải hay không
bool kiemTra7(int n) {
    int pre_dig = n % 10;
    n /= 10;
    while (n > 0) {
        int cur_dig = n % 10;
        if (cur_dig <= pre_dig) {
            pre_dig = cur_dig;
            n /= 10;
        }
        else {
            return 0;
        }
    }
    return 1;
}
//Kiểm tra các chữ số của n có giảm dần từ trái sang phải hay không
bool kiemTra8(int n) {
    int pre_dig = n % 10;
    n /= 10;
    while (n > 0) {
        int cur_dig = n % 10;
        if (cur_dig >= pre_dig) {
            pre_dig = cur_dig;
            n /= 10;
        }
        else {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n = 0;
    cout << "Nhap gia tri n: "; cin >> n;
    lietKe1(n);
    cout << "Tong cac uoc cua n: " << Tong1(n) << endl;
    cout << "Tich cac uoc cua n: " << Tich1(n) << endl;
    cout << "So cac uoc cua n: " << Dem1(n) << endl;
    lietKe2(n);
    cout << "Tong cac uoc so chan cua n: " << Tong2(n) << endl;
    cout << "Tich cac uoc so le cua n: " << Tich2(n) << endl;
    cout << "So cac uoc so chan cua n: " << Dem2(n) << endl;
    cout << "Tong cac uoc so nho hon n: " << Tong3(n) << endl;
    cout << "Uoc so le lon nhat cua n: " << Tim1(n) << endl;
    if (kiemTra1(n))
        cout << n << " la so hoan thien!" << endl;
    else cout << n << " khong la so hoan thien!" << endl;
    if (kiemTra2(n)) 
        cout << n << " la so nguyen to!" << endl;
    else cout << n << " khong la so nguyen to!" << endl;
    if (kiemTra3(n))
        cout << n << " la so chinh phuong!" << endl;
    else cout << n << " khong la so chinh phuong!" << endl;
    if (kiemTra4(n))
        cout << n << " la so doi xung!" << endl;
    else cout << n << " khong la so doi xung!" << endl;
    cout << "So nguyen duong k lon nhat thoa 1 + 2 + ... + k < n: " << Tim2(n) << endl;
    cout << "Tong cac chu so cua n: " << Tong4(n) << endl;
    cout << "Tich cac chu so cua n: " << Tich3(n) << endl;
    cout << "So chu so le cua n: " << Dem3(n) << endl;
    cout << "Tong cac chu so chan cua n: " << Tong5(n) << endl;
    cout << "Tich cac chu so le cua n: " << Tich4(n) << endl;
    cout << "Chu so dau tien cua n: " << Tim3(n) << endl;
    cout << "Chu so dao nguoc cua n: " << Tim4(n) << endl;
    cout << "Chu so lon nhat cua n: " << Tim5(n) << endl;
    cout << "Chu so nho nhat cua n: " << Tim6(n) << endl;
    cout << "So chu so lon nhat cua n: " << Dem4(n) << endl;
    cout << "So chu so nho nhat cua n: " << Dem5(n) << endl;
    cout << "So chu so dau tien cua n: " << Dem6(n) << endl;
    if (kiemTra5(n))
        cout << n << " la so toan le!" << endl;
    else cout << n << " khong la so toan le!" << endl;
    if (kiemTra6(n))
        cout << n << " la so toan chan!" << endl;
    else cout << n << " khong la so toan chan!" << endl;
    if (kiemTra7(n))
        cout << n << " co cac chu so tang dan!" << endl;
    else cout << n << " khong co cac chu so tang dan!" << endl;
    if (kiemTra8(n))
        cout << n << " co cac chu so giam dan!" << endl;
    else cout << n << " khong co cac chu so giam dan!" << endl;
    return 0;
}