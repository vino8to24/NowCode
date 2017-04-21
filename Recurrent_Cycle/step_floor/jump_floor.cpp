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