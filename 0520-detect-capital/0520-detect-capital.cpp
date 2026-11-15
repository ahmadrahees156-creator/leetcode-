class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int upper = 0;
        int lower = 0;

        for(int i = 0; i < word.length(); i++) {
            if(isupper(word[i])) {
                upper++;
            }
            else {
                lower++;
            }
        }

        if(upper == word.length() || lower == word.length()) {
            return true;
        }

        if(isupper(word[0]) && lower == word.length()-1) {
            return true;
        }

        return false;
    }
};