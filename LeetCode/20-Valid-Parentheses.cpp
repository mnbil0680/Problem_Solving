class Solution {
public:
    bool isValid(std::string s) {
        // Map to store matching pairs for each closing bracket
        std::unordered_map<char, char> matchingBracket = {
            {')', '('}, {'}', '{'}, {']', '['}};

        // Stack to store opening brackets
        std::stack<char> stk;

        // Traverse each character in the input string
        for (char ch : s) {
            // If it's an opening bracket, push it onto the stack
            if (ch == '(' || ch == '{' || ch == '[') {
                stk.push(ch);
            }
            // If it's a closing bracket, check if it matches the top of the
            // stack
            else {
                // If the stack is empty or the top doesn't match, return false
                if (stk.empty() || stk.top() != matchingBracket[ch]) {
                    return false;
                }
                // Pop the matched opening bracket from the stack
                stk.pop();
            }
        }

        // If the stack is empty, all brackets were matched correctly
        return stk.empty();
    }
};
