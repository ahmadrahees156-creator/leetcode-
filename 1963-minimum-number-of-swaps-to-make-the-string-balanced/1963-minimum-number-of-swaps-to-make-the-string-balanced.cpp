class Solution {
public:
    int minSwaps(string s) {
        int ob=0;
        int cb=0;
        int swaps=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[')  ob++;
            else cb++;

            if(cb>ob) {
                swaps++;
                ob++;
                cb--;
            }
        }
        return swaps;
    }
};