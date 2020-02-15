class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        
        for(int n = 0; n <= num; n++) {
            int count = 0, mask = 1;
            for(int i = 0; i < 31; i++) {
                if(n & mask)
                    count++;
                mask = mask << 1;
            }
            res.push_back(count);
        }
        
        return res;
    }
};