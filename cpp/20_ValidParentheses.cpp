class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;

        char bracket;
        for (int i = 0; i < s.length(); i++) {
            bracket = s[i];

            // ( or [ or {
            if (bracket == '(' || bracket == '{' || bracket == '[') {
                parentheses.push(bracket);
            }
            // ) or ] or }
            else {
                if (!parentheses.empty()) {
                    char temp;
                    temp = parentheses.top();

                    if (temp == '(' && bracket == ')') {
                        parentheses.pop();
                    }
                    else if (temp == '{' && bracket == '}')
                    {
                        parentheses.pop();
                    }
                    else if (temp == '[' && bracket == ']')
                    {
                        parentheses.pop();
                    }
                    else
                        return false;
                }
                else
                    return false;
            }
        }

        return parentheses.empty();
    }
};