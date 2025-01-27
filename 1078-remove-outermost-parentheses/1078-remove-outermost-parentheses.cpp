class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st; // Stack to track the balance of parentheses
        string result = ""; // Final result string

        for (char ch : s) {
            if (ch == '(') {
                // Push onto the stack only if it's not an outermost '('
                if (!st.empty()) {
                    result += ch;
                }
                st.push(ch); // Push every '(' to the stack
            } else if (ch == ')') {
                st.pop(); // Pop a '(' from the stack
                // Add to the result only if it's not the outermost ')'
                if (!st.empty()) {
                    result += ch;
                }
            }
        }

        return result;
    }
};
