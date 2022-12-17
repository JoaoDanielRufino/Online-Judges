class Solution {
public:
    bool isNumber(string str) {
        if(isdigit(str[0]))
            return true;

        if(str[0] == '-' && str.size() > 1)
            return true;
        
        return false;
    }

    int evalRPN(vector<string>& tokens) {
        stack<long long int> st;

        for(string token : tokens) {
            if(isNumber(token))
                st.push(stoi(token));
            else {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if(token == "+")
                    st.push(a + b);
                else if(token == "-")
                    st.push(a - b);
                else if(token == "*")
                    st.push((long long) a * b);
                else
                    st.push(a / b);
            }
        }

        return st.top();
    }
};
