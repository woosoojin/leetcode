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
	vector<int> subAns;
	vector<vector<int>> ans;
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		bfs(root);
		reverse(ans.begin(), ans.end());
		return ans;
	}

	void bfs(TreeNode* root) {
		if (!root)
			return;

		queue<TreeNode* > q;
		q.push(root);

		while (!q.empty()) {
			int size = q.size();

			subAns.clear();
			for (int i = 0; i < size; i++) {
				TreeNode* tempNode = q.front();
				q.pop();

				subAns.push_back(tempNode->val);

				// left
				if (tempNode->left)
					q.push(tempNode->left);

				// right
				if (tempNode->right)
					q.push(tempNode->right);
			}

			ans.push_back(subAns);
		}
	}
};