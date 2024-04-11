#include<iostream>
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
	void scanList(int n) {
		int val;
		Node* temp = head;
		for (int i = 1; i <= n; i++) {
			cin >> val;
			//addNewNode(i, val);
			Node* cur = new Node(val);
			temp->next = cur;
			cur = cur->next;
		}
		//printList(head);
	}
	void printList(Node* head) {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->score << " ";
			temp = temp->next;
		}
		cout << endl;
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
	Node* addTwoList(Node* list1, Node* list2) {
		Node* dummy = new Node(-1);
		Node* cur = dummy;
		int surplus = 0;
		while (list1 != NULL || list2 != NULL || surplus > 0) {
			if (list1) {
				surplus += list1->score;
				list1 = list1->next;
			}
			if (list2) {
				surplus += list2->score;
				list2 = list2->next;
			}
			cur->next = new Node(surplus % 10);
			surplus /= 10;
			cur = cur->next;
		}
		return dummy->next;
	}
	void swapTwoNodes(Node* head, int k) {
		Node* left = head, * right = head;
		for (int i = 0; i < k - 1; i++)
			left = left->next;
		Node* hare = left;
		while (left->next != NULL) {
			right = right->next;
			left = left->next;
		}
		if (left == NULL || right == NULL || hare == NULL)
			return;
		int temp = hare->score;
		hare->score = right->score;
		right->score = temp;
		cout << "Danh sach sau khi hoan vi 2 node la: ";
	}
	void oddEvenList(Node*& head) {
		Node* odd = head;
		Node* even = head->next;
		Node* evenHead = head->next;
		while (even != NULL && even->next != NULL) {
			odd->next = odd->next->next;
			even->next = even->next->next;
			odd = odd->next;
			even = even->next;
		}
		odd->next = evenHead;
		cout << "Danh sach sau khi bien doi la: ";
	}
	int gcd(int a, int b) {
		if (a == 0 || b == 0)
			return a + b;
		while (a != b) {
			if (a > b)
				a -= b;
			else b -= a;
		}
		return a;
	}
	void insertGreatestCommonDivisors(Node* head) {
		Node* cur = head;
		while (cur != NULL && cur->next != NULL) {
			int curVal = cur->score;
			int nextVal = cur->next->score;
			int x = gcd(curVal, nextVal);
			Node* temp = new Node(x);
			temp->next = cur->next;
			cur->next = temp;
			cur = cur->next->next;
		}
		cout << "Danh sach sau khi bien doi: ";
	}
	void mergeNodesBetweenZero(Node*& head) {
		Node* left = head;
		Node* right = left->next;
		int sum = 0;
		while (right != NULL) {
			if (right->score == 0) {
				right->score = sum;
				left->next = right;
				left = right;
				sum = 0;
			}
			else sum += right->score;
			right = right->next;
		}
		head = head->next;
		cout << "Danh sach sau khi bien doi: ";
	}
	void mergeInBetween(Node*& list1, Node*& list2, int a, int b) {
		Node* temp1 = list1;
		Node* temp2 = list2;
		Node* temp3 = list1;
		for (int i = 0; i < a - 1; i++) {
			temp1 = temp1->next;
		}
		for (int i = 0; i <= b; i++) {
			temp3 = temp3->next;
		}
		temp1->next = list2;
		while (temp2->next != NULL) {
			temp2 = temp2->next;
		}
		temp2->next = temp3;
		cout << "Danh sach sau khi gop la: ";
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
	Node* addTwoListII(Node* list1, Node* list2) {
		list1 = reverseList(list1);
		list2 = reverseList(list2);
		Node* dummy = new Node(-1);
		Node* cur = dummy;
		int surplus = 0;
		while (list1 != NULL || list2 != NULL || surplus > 0) {
			if (list1) {
				surplus += list1->score;
				list1 = list1->next;
			}
			if (list2) {
				surplus += list2->score;
				list2 = list2->next;
			}
			cur->next = new Node(surplus % 10);
			surplus /= 10;
			cur = cur->next;
		}
		return reverseList(dummy->next);
	}

};
int main() {
	DanhSachLienKet danhsach1, danhsach2;
	int n1, n2, a, b;
	cin >> n1 >> n2;

	danhsach1.scanList(n1);
	cout << "Danh sach 1 la: ";
	danhsach1.printList(danhsach1.head);

	danhsach2.scanList(n2);
	cout << "Danh sach 2 la: ";
	danhsach2.printList(danhsach2.head);
	//cin >> a >> b;

	/*Node* sumList = danhsach1.addTwoList(danhsach1.head, danhsach2.head);
	cout << "Danh sach sau khi cong la: ";
	danhsach2.printList(sumList);*/
	//danhsach1.swapTwoNodes(danhsach1.head, k);
	//danhsach1.oddEvenList(danhsach1.head);
	//danhsach1.insertGreatestCommonDivisors(danhsach1.head);
	//danhsach1.mergeNodesBetweenZero(danhsach1.head);
	//danhsach1.mergeInBetween(danhsach1.head, danhsach2.head, a, b);
	Node* sumList = danhsach1.addTwoListII(danhsach1.head, danhsach2.head);
	danhsach1.printList(sumList);

	danhsach1.deleteMemory();
	//danhsach2.deleteMemory();
}