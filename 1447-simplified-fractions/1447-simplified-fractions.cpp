class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;

        for(int d =2;d<=n;d++){
            for(int n =1;n<d;n++){
                if(gcd(n,d)==1) 
                ans.push_back(to_string(n)+"/"+to_string(d));
            }
        }
        return ans;
    }
};