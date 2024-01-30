#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int countParagraph(fstream &input) {
	string line;
	int cntpara = 0;
	while (getline(input, line)) {
		if (line.empty())
			cntpara++;
	}
	return cntpara;
}

int main() {
	fstream input, output;
	input.open("input.txt", ios::in);
	if (input.eof()) {
		cout << "Khong the mo tap tin!";
	}
	else {
		cout << "Mo tap tin thanh cong!";
	}
	output.open("output.txt", ios::out);
	
	output << countParagraph(input);
	input.close();
	output.close();

	return 0;
}