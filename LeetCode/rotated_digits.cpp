class Solution {
public:
    int rotatedDigits(int n) {
        int good = 0;
        unordered_map<char, char> mp;
        
        mp['0'] = '0';
        mp['1'] = '1';
        mp['2'] = '5';
        mp['5'] = '2';
        mp['6'] = '9';
        mp['8'] = '8';
        mp['9'] = '6';
        
        for(int i = 1; i <= n; i++) {
            string tmp = to_string(i);
            string aux;
            for(int j = 0; j < tmp.size(); j++) {
                if(mp[tmp[j]])
                    aux += mp[tmp[j]];
                else
                    break;
            }
            if(tmp.size() == aux.size() && tmp != aux)
                good++;
        }
        
        return good;
    }
};
