#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    // Nhập câu từ người dùng
    cout << "Nhap cau ban dau: ";
    string str;
    getline(cin, str);

    // Sử dụng stringstream để tách từ trong câu
    stringstream ss(str);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    // Đảo ngược từng từ và xuất ra màn hình
    cout << "Sau khi dao nguoc: ";
    for (int i = words.size() - 1; i >= 0; --i) {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}
