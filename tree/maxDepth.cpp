#include "Solution.hpp"

//104. ��������������
int maxDepth(TreeNode* root) {
	return helper(root, 0);
}
int helper(TreeNode* root, int layer) {
	if (root == nullptr) return layer;
	int i = helper(root->left, layer + 1);
	int j = helper(root->right, layer + 1);
	return i > j ? i : j;
}
