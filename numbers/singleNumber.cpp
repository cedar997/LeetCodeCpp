#include<vector>
#include <iostream>
using namespace std;
//136. ֻ����һ�ε�����
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