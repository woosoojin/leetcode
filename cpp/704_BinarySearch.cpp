// Runtime: 74 ms, faster than 19.60 % of C++ online submissions for Binary Search.
// Memory Usage : 27.6 MB, less than 12.32 % of C++ online submissions for Binary Search.
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int startIdx = 0;
        int endIdx = nums.size() - 1;
        int mid = (startIdx + endIdx) / 2;

        while (startIdx <= endIdx) {
            if (nums[mid] < target) {
                startIdx = mid + 1;
                mid = (startIdx + endIdx) / 2;
            }
            else if (nums[mid] > target) {
                endIdx = mid - 1;
                mid = (startIdx + endIdx) / 2;
            }
            else
                return mid;
        }

        return -1;
    }
};