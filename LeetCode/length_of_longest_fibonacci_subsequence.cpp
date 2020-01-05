class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        int maxLen = 0;
        unordered_set<int> st(A.begin(), A.end());
        
        for(int i = 0; i < A.size()-1; i++) {
            for(int j = i+1; j < A.size(); j++) {
                int a = A[j];
                int b = A[i] + A[j];
                int len = 2;
                while(st.count(b)) {
                    int tmp = a + b;
                    a = b;
                    b = tmp;
                    maxLen = max(maxLen, ++len);
                }
            }
        }
        
        return maxLen >= 3 ? maxLen : 0;
    }
};