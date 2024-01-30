#include<iostream>
#include<string>
using namespace std;
int main() {
	int tc = 0; cin >> tc;
	while (tc--) {
		int n = 0, m = 0;
		cin >> n >> m;
		string str, substr;
		cin >> str >> substr;
		int max = 6, cnt = 0;
		bool flag = 0;
		while (max--) {
			if (str.find(substr) != string::npos) {
				flag = 1;
				break;
			}
			cnt++;
			str += str;
		}
		if (flag)
			cout << cnt << endl;
		else cout << -1 << endl;
	}
	return 0;
}