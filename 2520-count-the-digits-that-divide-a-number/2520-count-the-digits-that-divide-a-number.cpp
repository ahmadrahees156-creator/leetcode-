class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int count =0;
        while(x>0){
            int digit=x%10;
            if(digit!=0){
            if(num%digit==0) count++;
            }
            x/=10;
        }
        return count;
    }
};