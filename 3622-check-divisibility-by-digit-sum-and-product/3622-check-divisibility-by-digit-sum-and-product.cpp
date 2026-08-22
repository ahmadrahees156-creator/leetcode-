class Solution {
public:
    bool checkDivisibility(int n) {
        int product=1;
        int digitsum=0;
        int x=n;
        while(n>0){
            int digit=n%10;
            digitsum+=digit;
            product*=digit;
            n/=10;
       }
      if(x%(digitsum+product)==0)  return true;
      else return false;
    }
};