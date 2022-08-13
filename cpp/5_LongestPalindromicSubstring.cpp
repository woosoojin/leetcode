// Runtime: 114 ms, faster than 59.61 % of C++ online submissions for Longest Palindromic Substring.
// Memory Usage : 8 MB, less than 69.33 % of C++ online submissions for Longest Palindromic Substring.

class Solution {
public:
    bool dp[1001][1001];
    int startIdx = 0;
    int longestLength = 1;

    string longestPalindrome(string s) {
        // base case 1) length == 1
        for (int i = 0; i < s.length(); i++) {
            dp[i][i] = true;
        }

        // base case 2) length == 2
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                startIdx = i;
                longestLength = 2;
            }
        }

        // length >= 3
        for (int lengthOfStr = 3; lengthOfStr <= s.length(); lengthOfStr++) {
            for (int i = 0; i < s.length() - lengthOfStr + 1; i++) {
                int j = i + lengthOfStr - 1;

                if (dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;

                    if (longestLength < lengthOfStr) {
                        startIdx = i;
                        longestLength = lengthOfStr;
                    }
                }
            }
        }

        return s.substr(startIdx, longestLength);
    }
};