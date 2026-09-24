class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        
        for (char c : s) {
            // 1. Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // 2. Handle closing brackets
            else {
                // If the stack is empty, there is no matching opening bracket
                if (st.empty()) return false;
                
                char top = st.top();
                // If the top element doesn't match the closing bracket, it's invalid
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
                
                // Pop the matched opening bracket
                st.pop();
            }
        }
        
        // 3. If stack is empty, all brackets were matched perfectly
        return st.empty();
    }
};