// Min Heap
// Runtime: 6 ms, faster than 93.82 % of C++ online submissions for Kth Largest Element in an Array.
// Memory Usage : 10.2 MB, less than 20.33 % of C++ online submissions for Kth Largest Element in an Array.
class Solution {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int findKthLargest(vector<int>& nums, int k) {
        for (auto num : nums) {
            pq.emplace(num);

            if (pq.size() > k)
                pq.pop();
        }

        return pq.top();
    }
};

// Max Heap
class Solution {
public:
    priority_queue<int> pq;
    int findKthLargest(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        for (int i = 0; i < k - 1; i++) {
            pq.pop();
        }

        return pq.top();
    }
};