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
	
	int size = 0;
	Node* head = NULL;

	void printList(Node* head) {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->score << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	Node* reverseList(Node*& head) {
		Node* prev = NULL;
		Node* cur = head;
		while (cur != NULL) {
			Node* temp = cur->next;
			cur->next = prev;
			prev = cur;
			cur = temp;
		}
		head = prev;
		return head;
	}
	bool isSymmetricList(Node* head) {
		Node* slow = head, * fast = head;
		while (fast != NULL && fast->next != NULL) {
			fast = fast->next->next;
			slow = slow->next;
		}
		Node* temp = reverseList(slow);
		while (temp != NULL) {
			if (head == NULL || head->score != temp->score)
				return 0;
			head = head->next;
			temp = temp->next;
		}
		return 1;
	}

	void printSymmetricList(Node* head) {
		if (isSymmetricList(head)) 
			cout << "Danh sach da cho doi xung!\n";
		else cout << "Danh sach da cho khong doi xung!\n";
	}

	Node* deleteDuplicateNode(Node*& head) {
		Node* cur = head;
		while (cur && cur->next) {
			Node* temp = cur->next;
			if (cur->score == temp->score) {
				cur->next = temp->next;
				delete temp;
			}
			else cur = cur->next;
		}
		return head;
	}
	void rotateList(Node*& head, int k) {
		if (head == NULL)
			return;
		Node* newHead, * tail;
		newHead = tail = head;
		int nodes = 1;
		while (tail->next != NULL) {
			tail = tail->next;
			nodes++;
		}
		tail->next = head;
		k %= nodes;
		for (int i = 0; i < nodes - k; i++) {
			tail = tail->next;
		}
		newHead = tail->next;
		tail->next = NULL;
		head = newHead;
		cout << "Danh sach sau khi xoay " << k << " lan la: ";
	}
	void addNewNode(int pos, int score) {
		Node* newNode = new Node(score);
		if (head == NULL) {
			head = newNode;
			size++;
			return;
		}
		if (pos == 1) {
			newNode->next = head;
			head = newNode;
			size++;
			return;
		}
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
	void randomList(int n) {
		srand(time(NULL));
		int i = 1;
		while (i <= n) {
			int val = rand() % 100;
			addNewNode(i, val);
			i++;
		}
	}

	void scanList(int n) {
		int val;
		for (int i = 1; i <= n; i++) {
			cin >> val;
			addNewNode(i, val);
		}
	}
	
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
	void getDecimalValue() {
		int bit = 0, decimal = 0;
		Node* temp = head;
		while (temp != NULL) {
			bit++;
			temp = temp->next;
		}
		temp = head;
		while (temp != NULL) {
			if (temp->score == 1)
				decimal += pow(2, bit - 1);
			bit--;
			temp = temp->next;
		}
		cout << "Gia tri thap phan cua danh sach: " << decimal << endl;
	}
	
};
int main() {
	int n; cin >> n;
	//int k; cin >> k;
	DanhSachLienKet danhsach;

	danhsach.scanList(n);
	//danhsach.randomList(n);
	cout << "Danh sach ban dau: ";
	danhsach.printList(danhsach.head);
	//danhsach.reverseList(danhsach.head);
	//danhsach.printSymmetricList(danhsach.head);
	//danhsach.rotateList(danhsach.head, k);
	//danhsach.deleteDuplicateNode(danhsach.head);
	danhsach.getDecimalValue();
	//danhsach.printList(danhsach.head);
	danhsach.deleteMemory();

}
