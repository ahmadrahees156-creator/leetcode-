class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minidx=0;
        int maxidx=0;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[minidx]) minidx=i;
            if(nums[i]>nums[maxidx]) maxidx=i;
        }
        if(minidx>maxidx) swap(minidx,maxidx);

    int left = maxidx+1;
    int right =n-minidx;
    int both =minidx+(n-maxidx)+1;
    left=min(left,right);
    
 return min(left,both);
    }
};