class Solution {
public:
   int finddigit(int n){
    int digit =0;
    while(n>0){
        n/=10;
        digit++;
    }
    return digit;
   }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int result=finddigit(nums[i]);
            if(result%2==0) ans++;
        }
        return ans;
    }
};