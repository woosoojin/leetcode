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
    bool init;
    int minDifference;
    int prev;

    int getMinimumDifference(TreeNode* root) {
        init = false;
        minDifference = INT_MAX;
        inorder(root);

        return minDifference;
    }
    void inorder(TreeNode* root) {
        if (!root)
            return;

        inorder(root->left);

        if (!init) {
            init = true;
        }
        else {
            minDifference = min(minDifference, root->val - prev);
        }
        prev = root->val;

        inorder(root->right);
    }
};