#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Hàm để tách họ và tên từ chuỗi đầu vào
void split_name(string input, string& first_name, string& last_name) {
    // Tìm vị trí của dấu gạch ngang
    size_t dash_pos = input.find('-');
    // Nếu không tìm thấy dấu gạch ngang, trả về chuỗi rỗng
    if (dash_pos == string::npos) {
        first_name = "";
        last_name = "";
        return;
    }
    // Tìm vị trí của khoảng trắng trước dấu gạch ngang
    size_t space_pos = input.rfind(' ', dash_pos - 1);
    // Nếu không tìm thấy khoảng trắng, trả về chuỗi rỗng
    if (space_pos == string::npos) {
        first_name = "";
        last_name = "";
        return;
    }
    // Lấy họ từ chuỗi đầu vào
    first_name = input.substr(0, space_pos);
    // Lấy tên từ chuỗi đầu vào
    last_name = input.substr(space_pos + 1, dash_pos - space_pos - 1);
}

// Hàm để tính tuổi từ ngày sinh
int calculate_age(string input, int current_day, int current_month, int current_year) {
    // Tìm vị trí của dấu gạch ngang
    size_t dash_pos = input.find('-');
    // Nếu không tìm thấy dấu gạch ngang, trả về -1
    if (dash_pos == string::npos) {
        return -1;
    }
    // Tìm vị trí của dấu chéo đầu tiên sau dấu gạch ngang
    size_t slash_pos1 = input.find('/', dash_pos + 1);
    // Nếu không tìm thấy dấu chéo, trả về -1
    if (slash_pos1 == string::npos) {
        return -1;
    }
    // Tìm vị trí của dấu chéo thứ hai sau dấu gạch ngang
    size_t slash_pos2 = input.find('/', slash_pos1 + 1);
    // Nếu không tìm thấy dấu chéo, trả về -1
    if (slash_pos2 == string::npos) {
        return -1;
    }
    // Lấy ngày sinh từ chuỗi đầu vào
    int birth_day = stoi(input.substr(dash_pos + 2, slash_pos1 - dash_pos - 2));
    // Lấy tháng sinh từ chuỗi đầu vào
    int birth_month = stoi(input.substr(slash_pos1 + 1, slash_pos2 - slash_pos1 - 1));
    // Lấy năm sinh từ chuỗi đầu vào
    int birth_year = stoi(input.substr(slash_pos2 + 1));
    // Khởi tạo tuổi bằng 0
    int age = 0;
    // Nếu tháng sinh lớn hơn tháng hiện tại, trừ đi 1 tuổi
    if (birth_month > current_month) {
        age--;
    }
    // Nếu tháng sinh bằng tháng hiện tại và ngày sinh lớn hơn ngày hiện tại, trừ đi 1 tuổi
    else if (birth_month == current_month && birth_day > current_day) {
        age--;
    }
    // Cộng thêm số năm chênh lệch giữa năm hiện tại và năm sinh
    age += current_year - birth_year;
    // Trả về tuổi
    return age;
}

int main() {
    // Nhập chuỗi đầu vào
    string input;
    cout << "Nhap chuoi theo dinh dang \"Ho va Ten - Ngay Sinh\": ";
    getline(cin, input);
    // Khai báo biến để lưu họ và tên
    string first_name, last_name;
    // Gọi hàm để tách họ và tên
    split_name(input, first_name, last_name);
    // In ra họ và tên
    cout << "Ho: " << first_name << endl;
    cout << "Ten: " << last_name << endl;
    // Khai báo biến để lưu ngày hiện tại
    int current_day, current_month, current_year;
    // Nhập ngày hiện tại
    cout << "Nhap ngay hien tai theo dinh dang dd/mm/yyyy: ";
    cin >> current_day >> current_month >> current_year;
    // Gọi hàm để tính tuổi
    int age = calculate_age(input, current_day, current_month, current_year);
    // In ra tuổi
    cout << "Tuoi: " << age << endl;
    return 0;
}

