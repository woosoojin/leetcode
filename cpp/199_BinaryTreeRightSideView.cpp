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
    vector<int> result;
    vector<int> tempVector;
    queue<TreeNode*> q;
    vector<int> rightSideView(TreeNode* root) {
        bfs(root);

        return result;
    }

    void bfs(TreeNode* root) {
        if (root == NULL)
            return;

        q.push(root);

        TreeNode* tempNode;
        while (!q.empty()) {
            int size = q.size();
            tempVector.clear();
            for (int i = 0; i < size; i++) {
                tempNode = q.front();
                tempVector.push_back(tempNode->val);
                q.pop();

                if (tempNode->left != NULL)
                    q.push(tempNode->left);
                if (tempNode->right != NULL)
                    q.push(tempNode->right);
            }

            result.push_back(tempVector.back());
        }
    }
};