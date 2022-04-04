class Solution {
public:
    int d[46];
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        if (d[n] != 0)
            return d[n];

        return d[n] = climbStairs(n - 1) + climbStairs(n - 2);
    }
};