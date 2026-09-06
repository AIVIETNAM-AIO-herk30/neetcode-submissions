class Solution {
public:
    bool isValid(string s) {
            stack<char> stck;
    bool is_valid = true;
    for (int i =0 ;i<s.length();i++){
        char c = s[i];
        if ( c =='(' || c == '[' || c == '{'){
            stck.push(c);
        }
        else{
            if (stck.empty()){
                is_valid = false;
                break;
            }
            char top_char = stck.top();
            if (
                (c == ')' && top_char == '(') ||
                (c == '}' && top_char == '{') ||
                (c == ']' && top_char == '[') 
            ){
                stck.pop();
            }
            else{
                is_valid = false;
                break;
            }

        }
    }
    if (is_valid && stck.empty()) {
        return true;
    } else {
        return false;
    }

    }
};
