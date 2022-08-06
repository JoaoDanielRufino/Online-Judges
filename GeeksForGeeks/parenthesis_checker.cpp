class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        
        for(char c : x) {
            if(!st.empty()) {
                if(st.top() == '{' && c == '}')
                    st.pop();
                else if(st.top() == '(' && c == ')')
                    st.pop();
                else if(st.top() == '[' && c == ']')
                    st.pop();
                else
                    st.push(c);
            } else {
                st.push(c);
            }
        }
        
        return st.empty();
    }

};
