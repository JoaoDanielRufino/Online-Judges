class Solution {
public:
    bool isVowel(char c) {
        char lowerCaseChar = tolower(c);
        if(lowerCaseChar == 'a' || lowerCaseChar == 'e' || lowerCaseChar == 'i' || lowerCaseChar == 'o' || lowerCaseChar == 'u')
            return true;
        return false;
    }

    bool halvesAreAlike(string s) {
        int vowels = 0;
        int middle = s.size() / 2;

        for(int i = 0; i < middle; i++) {
            if(isVowel(s[i]))
                vowels++;
        }

        for(int i = middle; i < s.size(); i++) {
            if(isVowel(s[i]))
                vowels--;
        }

        return !vowels;
    }
};
