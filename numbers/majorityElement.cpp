#include <vector>
#include <iostream>
using namespace std;
//169. 多数元素,求众数
int majorityElement(vector<int>& nums) {
	int candidate= nums[0];
	int count = 0;
	for (int i : nums) {
		if (count == 0)
			candidate = i;
		if (i == candidate) {
			count++;
		}
		else  {
			count--;
		}
	}
	return candidate;
}

void main() {
	vector<int> nums  { 1,2,1,1};
	cout << majorityElement(nums);
}