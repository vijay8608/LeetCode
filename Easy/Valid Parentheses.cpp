/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

*/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> parenthesis;
        
        for (char c : s)
        {
            switch(c)
            {
                case '(': parenthesis.push(c);
                    break;
                case '{': parenthesis.push(c);
                    break;
                case '[': parenthesis.push(c);
                    break;
                case ')': if (parenthesis.empty() || parenthesis.top()!='(') return false;else parenthesis.pop();
                    break;
                case '}': if (parenthesis.empty() || parenthesis.top()!='{') return false;else parenthesis.pop();
                    break;
                case ']': if (parenthesis.empty() || parenthesis.top()!='[') return false;else parenthesis.pop();
                    break;
            }
        }
        
        return parenthesis.empty();
        
    }
};