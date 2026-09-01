class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        int x=num;
        if(num==0) return "0";

        if(num<0) {
            ans+="-";
            num=-num;
        }
        while(num>0){
            
            ans+=to_string(num%7);
            num/=7;
        }
        if(x<0) {
            reverse(ans.begin()+1,ans.end());
            return ans;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};