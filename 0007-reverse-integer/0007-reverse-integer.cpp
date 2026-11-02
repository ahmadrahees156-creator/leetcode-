class Solution {
public:
    int reverse(int x) {
        long long reverse=0;
     

    
        while(x!=0){
        int rem=x%10;
        reverse=reverse*10+rem;
        if(reverse > INT_MAX || reverse<INT_MIN) return 0;
        x=x/10;
        }

     return reverse;
    }
};