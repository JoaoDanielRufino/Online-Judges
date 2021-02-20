class NumArray {
public:
    vector<int> aux;
    
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums) {
            sum += x;
            aux.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        if(!i)
            return aux[j];
        
        return aux[j] - aux[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
