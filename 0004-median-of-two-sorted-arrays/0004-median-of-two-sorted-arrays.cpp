class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        vector<int> merge(m+n);
         int k=0;
        for(int i=0;i<m;i++){
            merge[i]=nums1[i];
          k++;
        }
        for(int j=0;j<n;j++){
            merge[k]=nums2[j];
            k++;
        }
        sort(merge.begin(),merge.end());
     int total=m+n;
     if(total%2==0)   return (merge[total/2 -1]+merge[total/2])/2.0;
     else return merge[total/2];
        
    }
};