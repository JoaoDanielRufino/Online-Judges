bool solution(vector<int> nums, int k) {
    map<int, vector<int>> mp;
    
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }
    
    for(auto it = mp.begin(); it != mp.end(); it++) {
        vector<int> positions = it->second;
        for(int i = 0; i < positions.size()-1; i++) {
            for(int j = i+1; j < positions.size(); j++) {
                if(abs(positions[i] - positions[j]) <= k)
                    return true;
                else
                    break;
            }
        }
    }
    
    return false;
}
