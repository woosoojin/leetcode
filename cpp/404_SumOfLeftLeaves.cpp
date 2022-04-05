/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int result = 0;

        if (root != NULL)
            traverse(root, result);

        return result;
    }

    bool traverse(TreeNode* root, int& result) {
        if (root->left != NULL) {
            if (traverse(root->left, result))
                result += root->left->val;
        }
        if (root->right != NULL)
            traverse(root->right, result);

        bool isLeasf = root->left == NULL && root->right == NULL;
        return isLeasf;
    }
};