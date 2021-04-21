#include<vector>
#include <iostream>
using namespace std;
//136. 只出现一次的数字
int singleNumber(vector<int>& nums) {
	int sum = 0;
	for (int n : nums) {
		sum = sum ^ n;
	}
	return sum;
}
int main() {
	vector<int> nums = { };
	cout << singleNumber(nums) << endl;
	return 0;
}