/*
  Problem Description
  һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
  �����������һ��n����̨���ܹ��ж�����������
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Solution {
public:
	int jumpFloorII(int number) {
		return (0x01 << (number - 1));
	}
};

int main() {
	
	int num;
	int res;
	Solution s;
	while (cin >> num) {
		s.jumpFloorII(num);
		cout << res << endl;
	}

	system("pause");
	return;
}