// Solution 1
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

// Solution 2
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int p1 = 0;
        int p2 = 0;
        vector<int> ans;
        set<int> s;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while (p1 < nums1.size() && p2 < nums2.size()) {
            if (nums1[p1] < nums2[p2])
                p1++;
            else if (nums1[p1] > nums2[p2])
                p2++;
            else {
                s.insert(nums1[p1]);
                p1++;
                p2++;
            }
        }

        for (auto eachValue : s) {
            ans.push_back(eachValue);
        }

        return ans;
    }
};