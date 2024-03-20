#include<iostream>
#include<fstream>

using namespace std;
void changeValue(int* &ptr) {
	*ptr = 20;
}
int main() {
	ofstream ofile;
	ofile.open("data.bin", ios::binary);
	if (!ofile.is_open()) {
		cout << "Error!";
		return 1;
	}
	int* ptr = new int(10);
	cout << "Gia tri ban dau la: " << *ptr << endl;
	changeValue(ptr);
	int result = *ptr;
	ofile.write((char*)&result, sizeof(int));
	ofile.close();

	ifstream ifile;
	ifile.open("data.bin", ios::binary);
	int dataFromFile;
	ifile.read((char*)&dataFromFile, sizeof(int));
	cout << "Gia tri luc sau la: " << dataFromFile << endl;
	ifile.close();

	delete ptr;
	return 0;
}