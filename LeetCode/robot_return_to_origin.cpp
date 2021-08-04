class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        
        for(char c : moves) {
            if(c == 'U')
                y++;
            else if(c == 'D')
                y--;
            else if(c == 'R')
                x++;
            else if(c == 'L')
                x--;
        }
        
        return !x && !y;
    }
};
