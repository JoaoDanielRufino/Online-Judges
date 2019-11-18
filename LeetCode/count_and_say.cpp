class Solution {
public:
    string countAndSay(int n) {
        string aux, res;
        
        aux = "1";
        n--;
        while(n--) {
            int count = 1;
            char tmp = aux[0];
            for(int i = 1; i < aux.size(); i++) {
                if(tmp == aux[i])
                    count++;
                else {
                    res += to_string(count) + tmp;
                    tmp = aux[i];
                    count = 1;
                }
            }
            aux = res + to_string(count) + tmp;
            res.clear();
        }
        
        return aux;
    }
};