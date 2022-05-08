class Solution {
public:
    int alphabet[26];

    bool isAnagram(string s, string t) {
        if (s.length() == t.length()) {
            for (int i = 0; i < s.length(); i++) {
                alphabet[s[i] - 'a']++;
            }

            for (int i = 0; i < t.length(); i++) {
                alphabet[t[i] - 'a']--;
            }

            for (int i : alphabet) {
                if (i != 0)
                    return false;
            }

            return true;
        }

        return false;
    }
};