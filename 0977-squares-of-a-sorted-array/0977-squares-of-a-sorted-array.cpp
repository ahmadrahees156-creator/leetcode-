class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            nums[j]=nums[i]*nums[i];
            j++;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};