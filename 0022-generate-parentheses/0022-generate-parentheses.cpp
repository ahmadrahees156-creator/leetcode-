class Solution {
public:
void generate(vector<string>& v,string s, int open,int close,int n){
    if(close==n){
        v.push_back(s);
        return;
    }
    if(open<n) generate(v,s+'(',open+1,close,n);
    if(close<open) generate(v,s+')',open,close+1,n);
}
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s="";
        generate(v,s,0,0,n);
        return v;
    }
};