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
    vector<int> v;
    bool isValidBST(TreeNode* root) {
        inOrderSearch(root);

        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] >= v[i + 1])
                return false;
        }

        return true;
    }

    void inOrderSearch(TreeNode* root) {
        if (root == NULL)
            return;

        if (root->left != NULL)
            inOrderSearch(root->left);
        v.push_back(root->val);
        if (root->right != NULL)
            inOrderSearch(root->right);
    }
};