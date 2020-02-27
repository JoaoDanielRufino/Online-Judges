class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = accumulate(A.begin(), A.end(), 0);
        int target = sum / 3;
        int count = 0;
        
        int aux = 0;
        for(int n : A) {
            aux += n;
            if(aux == target) {
                count++;
                aux = 0;
                if(count == 3)
                    return true;
            }
        }
        
        return false;
    }
};