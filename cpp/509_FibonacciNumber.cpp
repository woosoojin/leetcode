class Solution {
public:
    int d[31];
    int fib(int n) {
        if (n <= 1)
            return n;

        if (d[n] != 0)
            return d[n];

        return d[n] = fib(n - 1) + fib(n - 2);
    }
};