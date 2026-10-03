class Solution {
public:
    bool isValid(string s) {
        stack<int> stac;
        for (char c : s) {
            if (c == '(') stac.push(')');
            else if (c == '{') stac.push('}');
            else if (c == '[') stac.push(']');

            else {
                if (stac.empty() || stac.top() != c) {
                    return false;
                }
                stac.pop();
            }
        }
        
        return stac.empty();
    }
};
