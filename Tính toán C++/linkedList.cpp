#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

struct Node {
	int score;
	Node* next;
	Node(int score) {
		this->score = score;
		this->next = NULL;
	}
};

struct DanhSachLienKet {
	Node* head = NULL;
	int size;
	void addNewNode(int pos, int val) {
		Node* newNode = new Node(val);
		//Tạo một nút khi danh sách liên kết chưa có phần tử nào
		if (head == NULL) {
			head = newNode;
			size++;
			return;
		}
		//Thêm một nút ở đầu danh sách liên kết
		if (pos == 1) {
			newNode->next = head;
			head = newNode;
			size++;
			return;
		}
		//Thêm một nút ở cuối danh sách liên kết
		if (pos == size + 1) {
			Node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->next = NULL;
			size++;
			return;
		}
		//Thêm một nút ở vị trí bất kỳ trong danh sách liên kết
		int cnt = 1;
		Node* temp = head;
		while (cnt < pos - 1) {
			temp = temp->next;
			cnt++;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		size++;
	}
	void deleteNode(int pos) {
		Node* temp = head;
		//Xóa một nút khi danh sách liên kết chỉ có 1 nút
		if (size == 1) {
			head = NULL;
			size--;
			return;
		}
		//Xóa một nút ở đầu danh sách liên kết
		if (pos == 1) {
			Node* temp = head;
			head = head->next;
			delete temp;
			size--;
			return;
		}
		//Xóa một nút ở cuối danh sách liên kết
		if (pos == size) {
			while (temp->next->next != NULL)
				temp = temp->next;
			temp->next = NULL;
			delete temp->next;
			size--;
		}
		//Xóa một nút ở vị trí bất kỳ trong danh sách liên kết
		int cnt = 1;
		while (cnt < pos - 1 && temp->next != NULL) {
			temp = temp->next;
			cnt++;
		}
		if (temp->next != NULL) {
			Node* toDelete = temp->next;
			temp->next = temp->next->next;
			delete toDelete;
			size--;
		}
	}
	//Giải phóng bộ nhớ
	void deleteMemory() {
		Node* temp = head;
		while (temp != NULL) {
			Node* cur = temp;
			temp = temp->next;
			delete cur;
		}
		head = NULL;
		size = 0;
	}
	//In danh sách liên kết ra màn hình
	void printNode() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->score << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	//Tìm nút có score lớn nhất trong danh sách liên kết
	int findMaxScore(Node* head) {
		if (head == NULL)
			return -1;
		int maxi = head->score;
		Node* temp = head->next;
		while (temp != NULL) {
			if (temp->score > maxi) {
				maxi = temp->score;
			}
			temp = temp->next;
		}
		return maxi;
	}
	//Tính trung bình score của tất cả các node trong danh sách liên kết
	float findAverage(Node* head) {
		Node* temp = head;
		int sum = 0, cnt = 0;
		while (temp != NULL) {
			sum += temp->score;
			cnt++;
			temp = temp->next;
		}
		float averageVal = (float)sum / cnt;
		return averageVal;
	}
	//Sắp xếp các nút trong danh sách liên kết với score trong các nút tăng dần
	void sortAccendingNode(Node*& head) {
		if (head == NULL || head->next == NULL)
			return;

		Node* sorted = NULL;
		Node* cur = head;

		while (cur != NULL) {
			Node* nextNode = cur->next;

			if (sorted == NULL || cur->score <= sorted->score) {
				cur->next = sorted;
				sorted = cur;
			}
			else {
				Node* prevSorted = NULL;
				Node* temp = sorted;
				while (temp != NULL && temp->score < cur->score) {
					prevSorted = temp;
					temp = temp->next;
				}
				cur->next = temp;
				if (prevSorted != NULL) {
					prevSorted->next = cur;
				}
				else {
					sorted = cur;
				}
			}
			cur = nextNode;
		}
		head = sorted;
	}
	void random(int n) {
		srand(time(NULL));
		int i = 1;
		while (i <= n) {
			int val = 1 + rand() % 100;
			addNewNode(i, val);
			i++;
		}
	}
};

int main() {
	int n = 0, todelete = 0;
	cout << "Nhap so luong node can tao: ";
	cin >> n;
	cout << "Nhap vi tri can xoa: ";
	cin >> todelete;
	DanhSachLienKet danhSach;

	danhSach.random(n);
	cout << "Danh sach sao khi tao\n";
	danhSach.printNode();

	danhSach.deleteNode(todelete);
	cout << "Danh sach sao khi xoa\n";
	danhSach.printNode();

	int maxi = danhSach.findMaxScore(danhSach.head);
	if (maxi == -1)
		cout << "Danh sach rong, khong co phan tu lon nhat!\n";
	else cout << "Phan tu score lon nhat la: " << maxi << endl;

	float averageVal = danhSach.findAverage(danhSach.head);
	cout << "Gia tri trung binh cac score la: " << averageVal << endl;

	danhSach.sortAccendingNode(danhSach.head);
	cout << "Danh sach sau khi sap xep tang dan la:\n";
	danhSach.printNode();

	danhSach.deleteMemory();
	return 0;
}