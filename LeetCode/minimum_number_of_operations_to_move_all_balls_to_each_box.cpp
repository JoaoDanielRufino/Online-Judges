class Solution {
public:
    int totalMoves(string boxes, int start) {
        int moves = 0;
        
        // right
        for(int i = start+1; i < boxes.size(); i++) {
            if(boxes[i] == '1')
                moves += i - start;
        }
        
        // left
        for(int i = start-1; i >= 0; i--) {
            if(boxes[i] == '1')
                moves += start - i;
        }
        
        return moves;
    }
    
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        
        for(int i = 0; i < boxes.size(); i++) {
            int moves = totalMoves(boxes, i);
            ans.push_back(moves);
        }
        
        return ans;
    }
};
