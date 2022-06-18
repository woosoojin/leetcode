class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> setContainer(nums1.begin(), nums1.end());
        vector<int> ans;

        for (int i = 0; i < nums2.size(); i++) {
            if (setContainer.count(nums2[i]) > 0)
                ans.push_back(nums2[i]);
            setContainer.erase(nums2[i]);
        }

        return ans;
    }
};