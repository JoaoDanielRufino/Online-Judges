class Solution {
public:
    int maxScore = 0;
    unordered_map<char, int> remainingLetters;
    
    int getWordScore(string word, vector<int>& score) {
        int wordScore = 0;
        
        for(char c : word) {
            if(remainingLetters[c] < 0)
                return 0;
            wordScore += score[c - 'a'];
        }
        
        return wordScore;
    }
    
    void updateRemainingLetters(string word) {
       for(char c : word) {
            remainingLetters[c]--;
        } 
    }
    
    void resetRemainingLetters(string word) {
        for(char c : word) {
            remainingLetters[c]++;
        }
    }
    
    void solve(vector<string>& words, vector<int>& score, int start, int currScore) {
        maxScore = max(maxScore, currScore);
        
        for(int i = start; i < words.size(); i++) {
            updateRemainingLetters(words[i]);
            int wordScore = getWordScore(words[i], score);
            solve(words, score, i+1, currScore + wordScore);
            resetRemainingLetters(words[i]);
        }
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        for(char c : letters)
            remainingLetters[c]++;
        
        solve(words, score, 0, 0);
        
        return maxScore;
    }
};
