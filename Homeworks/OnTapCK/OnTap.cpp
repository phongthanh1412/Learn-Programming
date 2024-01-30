#include <iostream>
#include <string>
#include <ctime>
    using namespace std;

// Định nghĩa kiểu dữ liệu cấu trúc cho một điện thoại
struct DienThoai
{
    string maSP;      // Mã sản phẩm, tối đa 20 kí tự
    string thoiHanBH; // Thời hạn bảo hành, là số ngày, tháng hoặc năm
    tm ngayMuaHang;   // Ngày mua hàng, kiểu dữ liệu ngày tháng năm
    double giaTien;   // Giá tiền, kiểu số thực
};

// Hàm nhập thông tin của một điện thoại từ bàn phím
void nhap(DienThoai &dt)
{
    cout << "Nhap ma san pham: ";
    getline(cin, dt.maSP); // Nhập chuỗi có khoảng trắng
    cout << "Nhap thoi han bao hanh: ";
    getline(cin, dt.thoiHanBH);
    cout << "Nhap ngay mua hang (dd/mm/yyyy): ";
    string ngay; // Chuỗi để lưu ngày mua hàng
    getline(cin, ngay);
    // Chuyển đổi chuỗi ngày thành kiểu dữ liệu ngày tháng năm
    dt.ngayMuaHang.tm_mday = stoi(ngay.substr(0, 2));        // Ngày
    dt.ngayMuaHang.tm_mon = stoi(ngay.substr(3, 2)) - 1;     // Tháng
    dt.ngayMuaHang.tm_year = stoi(ngay.substr(6, 4)) - 1900; // Năm
    cout << "Nhap gia tien: ";
    cin >> dt.giaTien; // Nhập số thực
    cin.ignore();      // Bỏ qua kí tự xuống dòng
}

// Hàm xuất thông tin của một điện thoại ra màn hình
void xuat(DienThoai dt)
{
    cout << "Ma san pham: " << dt.maSP << endl;
    cout << "Thoi han bao hanh: " << dt.thoiHanBH << endl;
    // Định dạng ngày mua hàng theo chuẩn dd/mm/yyyy
    char ngay[11];
    strftime(ngay, 11, "%d/%m/%Y", &dt.ngayMuaHang);
    cout << "Ngay mua hang: " << ngay << endl;
    cout << "Gia tien: " << dt.giaTien << endl;
}

// Hàm tính ngày hết hạn bảo hành của một điện thoại
tm tinhNgayHetHan(DienThoai dt)
{
    tm ngayHetHan = dt.ngayMuaHang; // Sao chép ngày mua hàng
    // Tách thời hạn bảo hành thành số và đơn vị
    int so = stoi(dt.thoiHanBH.substr(0, dt.thoiHanBH.length() - 1));
    char donVi = dt.thoiHanBH[dt.thoiHanBH.length() - 1];
    // Cộng thêm thời hạn bảo hành vào ngày mua hàng
    if (donVi == 'd')
    {                             // Nếu đơn vị là ngày
        ngayHetHan.tm_mday += so; // Cộng thêm số ngày
    }
    else if (donVi == 'm')
    {                            // Nếu đơn vị là tháng
        ngayHetHan.tm_mon += so; // Cộng thêm số tháng
    }
    else if (donVi == 'y')
    {                             // Nếu đơn vị là năm
        ngayHetHan.tm_year += so; // Cộng thêm số năm
    }
    // Chuẩn hóa ngày hết hạn
    mktime(&ngayHetHan);
    return ngayHetHan;
}

// Hàm hoán vị hai điện thoại
void hoanVi(DienThoai &dt1, DienThoai &dt2)
{
    DienThoai temp = dt1;
    dt1 = dt2;
    dt2 = temp;
}

// Hàm sắp xếp một mảng điện thoại tăng dần theo giá tiền
void sapXep(DienThoai ds[], int n)
{
    // Sử dụng thuật toán sắp xếp nổi bọt
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Nếu điện thoại thứ i có giá tiền cao hơn điện thoại thứ j
            if (ds[i].giaTien > ds[j].giaTien)
            {
                // Hoán vị hai điện thoại
                hoanVi(ds[i], ds[j]);
            }
        }
    }
}

// Hàm chính
int main()
{
    // Khai báo một biến điện thoại để thử chức năng 1
    DienThoai dt;
    // Nhập thông tin của điện thoại
    nhap(dt);
    // Tính ngày hết hạn bảo hành
    tm ngayHetHan = tinhNgayHetHan(dt);
    // Định dạng ngày hết hạn theo chuẩn dd/mm/yyyy
    char ngay[11];
    sprintf(ngay, "%02d/%02d/%04d", ngayHetHan.tm_mday, ngayHetHan.tm_mon + 1, ngayHetHan.tm_year + 1900);
    // Xuất kết quả
    cout << "Ngay het han bao hanh: " << ngay << endl;

    // Khai báo một mảng điện thoại để thử chức năng 2
    DienThoai ds[100]; // Mảng tối đa 100 điện thoại
    int n;             // Số lượng điện thoại thực tế
    cout << "Nhap so luong dien thoai: ";
    cin >> n;     // Nhập số nguyên
    cin.ignore(); // Bỏ qua kí tự xuống dòng
    // Nhập thông tin của n điện thoại
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin dien thoai thu " << i + 1 << ":" << endl;
        nhap(ds[i]);
    }
    // Sắp xếp mảng điện thoại tăng dần theo giá tiền
    sapXep(ds, n);
    // Xuất kết quả
    cout << "Danh sach dien thoai sau khi sap xep:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin dien thoai thu " << i + 1 << ":" << endl;
        xuat(ds[i]);
    }
    return 0;
}
