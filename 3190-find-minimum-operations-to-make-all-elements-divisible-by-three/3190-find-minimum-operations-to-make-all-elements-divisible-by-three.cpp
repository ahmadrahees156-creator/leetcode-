class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
          if(nums[i]%3==2) count+=1;
          else  count+=nums[i]%3;
        }
        return count;
            }
};