class Solution {
public:

string tobinary(int n){
  string ans="";
  while(n>0){
    ans+=to_string(n%2);
    n/=2;
  }
  reverse(ans.begin(),ans.end());

  return ans;
}
    string convertDateToBinary(string date) {
        
        int year= stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));

        return tobinary(year) + "-" + tobinary(month) + "-"+tobinary(day);
    }
};