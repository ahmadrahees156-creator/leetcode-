class Solution {
public:
    string smallestPalindrome(string s) {
        string ans;
        string p = s;
        int n=s.length();
        sort(p.begin(),p.begin()+n/2);
        for(int i = 0; i<n/2; i++){
            ans+=p[i];
        }
    string b = ans;
    reverse(b.begin(), b.end());
  if(n%2==0){
    ans = ans + b;
  }
  else {
    ans+=s[n/2];
    ans+=b;
    }
        return ans;
    }
};