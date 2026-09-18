class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        for(int i=nums.size()-1;i>=0;i--){
            int x=nums[i];
            nums.push_back(x);
        }
        return nums;
    }
};