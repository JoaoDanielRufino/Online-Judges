vector<string> solution(vector<int> nums) {
    if(!nums.size())
        return vector<string> ();
    
    vector<string> ans;

    int first = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] - nums[i-1] != 1) {
            if(first != nums[i-1])
                ans.push_back(to_string(first) + "->" + to_string(nums[i-1]));
            else
                ans.push_back(to_string(first));
            first = nums[i];
        }
    }
    
    if(first == nums[nums.size()-1])
        ans.push_back(to_string(first));
    else
        ans.push_back(to_string(first) + "->" + to_string(nums[nums.size()-1]));
    
    return ans;
}
