class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long> st;
        for(long long  x : nums){
            while(!st.empty() && st.top()==x){
                st.pop();
                x=x*2;
            }
            st.push(x);
        }
        vector<long long> ans;

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
            reverse(ans.begin(),ans.end());
        
        return ans;
        }
    
};