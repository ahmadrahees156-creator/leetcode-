class Solution {
public:
    int minAddToMakeValid(string s) {
        int cb=0;
        int ob=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')') cb++;
            else ob++;
            if(cb>ob){
                ans++;
                cb--;
            }
        }
        return ans+ob-cb;
    }
};