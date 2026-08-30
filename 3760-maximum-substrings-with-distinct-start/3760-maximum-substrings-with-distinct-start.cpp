class Solution {
public:
    int maxDistinct(string s) {
        int n=s.length();
        int freq[26] ={0};
        int count=0;
       for(int i = 0; i <n; i++) {
    if(freq[s[i] - 'a'] == 0) {
        count++;
    }
    freq[s[i] - 'a']++;
}
  return count;
    }
};