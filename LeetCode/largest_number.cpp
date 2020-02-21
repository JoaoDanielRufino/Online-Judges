class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> aux;
        
        for(int n : nums)
            aux.push_back(to_string(n));
        
        sort(aux.begin(), aux.end(), [](const string a, const string b) {
            string x = a + b;
            string y = b + a;
            return x > y;
        });
        
        string res;
        for(string s : aux)
            res += s;
        
        return res[0] == '0' ? "0" : res;
    }
};