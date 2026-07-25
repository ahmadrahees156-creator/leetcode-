class Solution {
public:
    int findComplement(int num) {
        vector<int> binary;
        while(num>0){
            binary.push_back(num%2);
            num/=2;
        }
        reverse(binary.begin(),binary.end());
        int size=binary.size();
        for(int i=0;i<size;i++){
          if(binary[i]==0) binary[i]=1;
          else binary[i]=0;
        }

        int x=1;
        int sum=0;
        for(int i=size-1;i>0;i--){
            sum+=binary[i]*x;
            x*=2;
        }

        
        return sum;
    }
};