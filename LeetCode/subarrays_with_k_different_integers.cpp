class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {
        unordered_map<int,int> w1, w2;
        
        int l1, l2, res;
        l1 = l2 = res = 0;
        for(int i = 0; i < A.size(); i++) {
            w1[A[i]]++;
            w2[A[i]]++;
            
            while(w1.size() > K) {
                w1[A[l1]]--;
                if(!w1[A[l1]])
                    w1.erase(A[l1]);
                l1++;
            }
            while(w2.size() >= K) {
                w2[A[l2]]--;
                if(!w2[A[l2]])
                    w2.erase(A[l2]);
                l2++;
            }
            
            res += l2 - l1;
        }
        
        return res;
    }
};