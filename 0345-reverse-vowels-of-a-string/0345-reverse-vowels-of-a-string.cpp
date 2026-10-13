class Solution {
public: 

 bool isvowel(char c){
      char ch = tolower(c);
    return ch=='a'|| ch =='e' || ch=='i' || ch=='o' || ch =='u';
 }
    string reverseVowels(string s) {
        int low=0;
        int high = s.length()-1;
        while(low<high){
           while(low<high && !isvowel(s[low])){
            low++;
           }
           while(low<high && !isvowel(s[high])){
            high--;
           }
           swap(s[low],s[high]);
            low++;
            high--;
           
        }
        return s;
        }
        
    };