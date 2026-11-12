class Solution {
public:
vector<string> result;
void solve(string s , int n){
    if(s.length()==n){
    result.push_back(s);
    return;
    }
    solve(s+'1',n);
    if(s.empty() || s.back()!='0'){
        solve(s+'0',n);

    }
    
}
    vector<string> validStrings(int n) {
        solve("",n);
        return result;
    }
};