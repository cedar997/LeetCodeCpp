#include "Solution.hpp"
#include<vector>
using namespace std;
// -----------------------
TreeNode* ret;
int helper(TreeNode* root, int vp, int vq) {
	if (ret != nullptr) return 3; //加快回溯速度
	int mid = root->val == vp ? 1 : 0;
	mid = root->val == vq ? 2 : mid;
	int left = root->left == nullptr ? 0 : helper(root->left, vp, vq);
	int right = root->right == nullptr ? 0 : helper(root->right, vp, vq);
	int sum = mid + left + right;
	if (sum == 3 && ret==nullptr) ret = root;
	return sum;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	helper(root, p->val, q->val);
	return ret;
}

// ---------------
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	TreeNode* ret = root;
	while (true)
	{

	}
	return ret;
}
void CreateBinTree(TreeNode& BT, vector<int> nums) {
	for (int i = 0; i < nums.size(); i++) {

	}
}
void main() {
	vector<int> root{ 6,2,8,0,4,7,9,nullptr,nullptr,3,5 };

}