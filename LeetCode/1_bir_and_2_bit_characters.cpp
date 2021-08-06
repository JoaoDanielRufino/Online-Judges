class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i = 0; i < bits.size(); i++) {
            if(i == bits.size()-2 && bits[i])
                return false;
            if(bits[i])
                i++;
        }
        
        return true;
    }
};
