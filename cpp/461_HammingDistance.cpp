class Solution {
public:
    int hammingDistance(int x, int y) {
        int exclusiveOR = x ^ y;

        int one = 1;
        int count = 0;
        for (int i = 0; i < 32; i++) {
            count += (exclusiveOR >> i) & one;
        }

        return count;
    }
};