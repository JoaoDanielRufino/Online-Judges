class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size())
            return false;
        
        if(A == B) {
            vector<int> aux(26, 0);
            for(char c : A)
                aux[c - 'a']++;
            
            for(int x : aux) {
                if(x >= 2)
                    return true;
            }
            return false;
        }
        else {
            int first = -1;
            int second = -1;
            for(int i = 0; i < A.size(); i++) {
                if(A[i] != B[i]) {
                    if(first == -1)
                        first = i;
                    else if(second == -1)
                        second = i;
                    else 
                        return false;
                }
            }
            
            return second != -1 && A[first] == B[second] && A[second] == B[first];
        }
    } 
};