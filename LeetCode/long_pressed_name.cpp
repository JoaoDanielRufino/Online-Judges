class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i, j;
        
        i = j = 0;
        while(i < name.size() && j < typed.size()) {
            if(name[i] == typed[j])
                i++;
            j++;
        }
        
        return i == name.size();
    }
};