/*
  输入一个链表，反转链表后，输出链表的所有元素。
*/

#include <iostream>
using std::cout;
using std::endl;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		ListNode* pre = NULL;
		ListNode* next = NULL;
		while (pHead != NULL) {
			next = pHead->next;
			pHead->next = pre;
			pre = pHead;
			pHead = next;
			//cout << pre->val << " ";
		}
		return pre;
	}
};

void createList(ListNode *phead, int n) {
	ListNode *head = phead;
	for (int i = 0; i < n; ++i) {
		ListNode *next = new ListNode(n);
		head->val = i;
		head->next = next;
		head = head->next;
	}
}

int main() {
	ListNode *phead = new ListNode(0);
	int n = 10;
	createList(phead, n);
	ListNode *head = phead;
	while (head!= NULL) {
		cout << head->val << " ";
		head = head -> next;
	}
	cout << endl;
	
	Solution s;
	ListNode *reverseHead = NULL;
	reverseHead = s.ReverseList(phead);
	cout << endl;
	while (reverseHead != NULL) {
		cout << reverseHead->val << " ";
		reverseHead = reverseHead->next;
	}
	cout << endl;
	
	delete phead;

	system("pause");
	return 0;
}
/*
  output:
  0 1 2 3 4 5 6 7 8 9 10
  10 9 8 7 6 5 4 3 2 1 0
*/