class Solution {
public:
    int maxProduct(int n) {
        vector<int> digit;
        while(n>0){
            digit.push_back(n%10);
            n/=10;
        }
        sort(digit.begin(),digit.end());
        int size = digit.size();

        return digit[size-1]*digit[size-2];
    }
};