class Solution {
public:
    int evalRPN(vector<string>& tokens) {
            stack<int> st;
    for (int i=0;i<tokens.size();i++){
        string c = tokens[i];
        if (c == "+" || c == "-" || c == "*" || c == "/"){
                int right = st.top();   
                st.pop();
                int left = st.top();
                st.pop();
            if (c=="+"){
                st.push(left+right);
            }
            if (c == "-"){
                st.push(left-right);
            }
            if (c == "*"){
                st.push(left*right);
            }
            if (c=="/"){
                st.push(left/right);
            }
        }
        else{
            int num = stoi(c);
            st.push(num);
        }
    }
    return st.top();
    }
};
