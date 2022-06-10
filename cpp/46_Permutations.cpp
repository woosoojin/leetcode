class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subAns;
    bool visited[7];

    vector<vector<int>> permute(vector<int>& nums) {
        backTrack(0, nums);
        return ans;
    }

    void backTrack(int cnt, vector<int> nums) {
        if (cnt == nums.size()) {
            ans.push_back(subAns);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!visited[i]) {
                visited[i] = true;
                subAns.push_back(nums[i]);
                backTrack(cnt + 1, nums);
                subAns.pop_back();
                visited[i] = false;
            }
        }
    }
};
