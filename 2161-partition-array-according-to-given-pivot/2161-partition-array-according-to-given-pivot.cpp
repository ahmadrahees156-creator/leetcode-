class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> equal;
        vector<int> greater;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) ans.push_back(nums[i]);
            else if(nums[i]==pivot) equal.push_back(nums[i]);
            else greater.push_back(nums[i]);
        }

        for(int x: equal){
            ans.push_back(x);
        }
        for(int y : greater){
            ans.push_back(y);
        }
        return ans;
    }
};