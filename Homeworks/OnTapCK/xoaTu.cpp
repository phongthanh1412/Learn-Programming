#include <iostream>
#include <string>
using namespace std;

// Hàm xóa tất cả các từ trùng với tu trong chuoi
string xoa_tu(string chuoi, string tu) {
  // Tạo một bản sao của chuoi để không làm thay đổi chuỗi ban đầu
  string ketqua = chuoi;

  // Duyệt qua chuỗi và tìm kiếm vị trí của từ cần xóa
  int vitri = ketqua.find(tu);
  while (vitri != string::npos) { // Nếu tìm thấy từ cần xóa
    // Lấy độ dài của từ cần xóa
    int dodai = tu.length();

    // Kiểm tra xem từ cần xóa có phải là một từ riêng biệt hay không
    // Nếu từ cần xóa là ký tự đầu tiên hoặc ký tự cuối cùng của chuỗi
    // Hoặc nếu ký tự trước và sau từ cần xóa là ký tự trắng hoặc ký tự kết thúc chuỗi
    // Thì mới thực hiện xoá từ đó
    if (vitri == 0 || vitri == ketqua.length() - dodai ||
        (ketqua[vitri - 1] == ' ' && (ketqua[vitri + dodai] == ' ' || ketqua[vitri + dodai] == '\0'))) {
      // Xoá từ cần xóa và một ký tự trắng phía sau nếu có
      ketqua.erase(vitri, dodai + 1);
    }

    // Tìm kiếm vị trí tiếp theo của từ cần xóa trong chuỗi
    vitri = ketqua.find(tu, vitri + 1);
  }

  // Trả về chuỗi mới sau khi xoá
  return ketqua;
}

int main() {
  // Nhập chuỗi và từ cần xoá từ bàn phím
  string chuoi, tu;
  cout << "Nhap chuoi: ";
  getline(cin, chuoi);
  cout << "Nhap tu can xoa: ";
  cin >> tu;

  // Gọi hàm xoa_tu và in kết quả
  string ketqua = xoa_tu(chuoi, tu);
  cout << "Chuoi sau khi xoa: " << ketqua << endl;

  return 0;
}

