/*
  Problem Description:
  一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
  求该青蛙跳上一个n级的台阶总共有多少种跳法。
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
	Solution s;
	int res;
	while (cin >> num) {
		res = s.jumpFloorII(num);
		cout << res << endl;
	}

	system("pause");
	return 0;
}