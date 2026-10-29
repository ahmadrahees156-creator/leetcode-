class Solution {
public:
    char findTheDifference(string s, string t) {
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      int i =0;
      int n = s.length();

      for( i =0;i<n+1;i++){
        
            if(s[i]!=t[i]) 
            break;
        }
      
        return t[i];
    }
};