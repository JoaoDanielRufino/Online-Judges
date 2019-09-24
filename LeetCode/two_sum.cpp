class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mymap;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {     
            int aux = target - nums[i];
            if(mymap.count(aux) && i != mymap[aux]) {
                res.push_back(mymap[aux]);
                res.push_back(i);
                return res;
            }
            mymap[nums[i]] = i;
        }
        
        return res;
    }
};