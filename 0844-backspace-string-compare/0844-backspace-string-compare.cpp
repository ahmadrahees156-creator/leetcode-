class Solution {
public:
 string converter(string s){
            string ans="";
        for(int i=0;i<s.length();i++){
            if( s[i]=='#'){
                if(!ans.empty()) ans.pop_back();
            } 
            else ans+=s[i];
        }
        return ans;
 }
    bool backspaceCompare(string s, string t) {
       string st= converter(s);
       string tt= converter(t);

       return st==tt;
    }
};