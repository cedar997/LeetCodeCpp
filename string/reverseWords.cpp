#include "Solution.hpp"
//557. 反转字符串中的单词 III
string reverseWords(string s) {
	int n = s.length();
	for (int i = 0; i < n; i++) {
		int j = i;
		while (j<n && s[j]!=' ')	j++;
		int k = i;
		i = j--;
		for (; k < j; k++, j--) {
			swap(s[k], s[j]);
		}
	}
	return s;
}