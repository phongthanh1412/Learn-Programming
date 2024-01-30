#include<iostream>
#include<iomanip>
using namespace std;
struct ThoiGian {
	int gio, phut, giay;
};
void XuLy(ThoiGian& time) {
	char c;
	cin >> time.gio >> c >> time.phut >> c >> time.giay;
	time.giay++;
	if (time.giay >= 60) {
		time.phut++;
		time.giay -= 60;
		if (time.phut >= 60) {
			time.gio++;
			time.phut -= 60;
			if (time.gio >= 24) {
				time.gio -= 24;
			}
		}
	}
	if (time.giay < 60) {

		if (time.phut >= 60) {
			time.gio++;
			time.phut -= 60;
			if (time.gio >= 24) {
				time.gio -= 24;
			}
		}
	}
	if (time.giay < 60 && time.phut < 60) {

		if (time.gio >= 24) {
			time.gio -= 24;
		}
	}


	cout << setfill('0') << setw(2) << time.gio << ":"
		<< setfill('0') << setw(2) << time.phut << ":"
		<< setfill('0') << setw(2) << time.giay;
}
int main() {
	ThoiGian time;
	XuLy(time);
	return 0;
}