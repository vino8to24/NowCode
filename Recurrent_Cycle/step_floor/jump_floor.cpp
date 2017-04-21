/*
  Problem Description:
  一只青蛙一次可以跳上1级台阶，也可以跳上2级。
  求该青蛙跳上一个n级的台阶总共有多少种跳法。
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class Solution {
public:
	int jumpFloor(int number) {
		int Fmin = 0;
		int Fmax = 1;
		int res = 0;
		int i;
		
		if (number == 0)
			return 0;
		if (number == 1)
			return 1;
		for (i = 0; i <= number; ++i) {
			res = Fmin + Fmax;
			Fmin = Fmax;
			Fmax = res;
		}
		return res;
	}
};

int main(){

	int step;
	Solution s;
	while (cin >> step) {
		int res;
		res = s.jumpFloor(step);
		cout << res << endl;
	}
	system("pause");
	return 0;
}