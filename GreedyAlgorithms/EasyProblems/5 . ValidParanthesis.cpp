class Solution {
public:
    bool checkValidString(string s) {
        stack<int> leftParentheses, stars;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                leftParentheses.push(i);
            } else if (s[i] == '*') {
                stars.push(i);
            } else { // s[i] == ')'
                if (!leftParentheses.empty()) {
                    leftParentheses.pop();
                } else if (!stars.empty()) {
                    stars.pop();
                } else {
                    return false;
                }
            }
        }
        while(!leftParentheses.empty() && !stars.empty()){
            if(leftParentheses.top()> stars.top()) return false;
            leftParentheses.pop();
            stars.pop();
        }
        return leftParentheses.empty();
    }
};