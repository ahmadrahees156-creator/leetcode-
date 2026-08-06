class Solution {
public:
int productdigit(int n){
    
        if(n==0) return 0;
    int product=1;
    while(n>0){
    
        product*=n%10;
        n/=10;
        
    } return product;
}
    int smallestNumber(int n, int t) {
        while(true){
        if(productdigit(n)%t==0) return n;
        n++;
    }
 }   
};