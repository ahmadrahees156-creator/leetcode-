class Solution {
public:
    string addStrings(string num1, string num2) {
        int a = num1.length();
        int b = num2.length();
        int c = min(a,b);
        string rev;

        int carry =0;
    
        for(int i=1; i<=c ; i++){
            int x = num1.back() - '0';
            int y = num2.back() - '0';
            int z = x + y + carry;
            if (z<10){
                rev.push_back(z + '0');
                carry = 0;
                num1.pop_back();
                num2.pop_back();
            }
            else{
                rev.push_back(z-10 + '0');
                carry = 1;
                num1.pop_back();
                num2.pop_back();
            }
        }

        if(num1.empty() == 0){
            while(true){

                if(num1.empty()==1){
                    break;
                }
                int n = num1.back() - '0';
                int m = n + carry;
                if (m>9){
                    rev.push_back(m-10 + '0');
                    carry = 1;
                }
                else {
                    rev.push_back(m + '0');
                    carry = 0;
                }
                num1.pop_back();

            }
            if (carry == 1){
                rev.push_back(1 + '0');
            }
        }

        else if (num1.empty() == 1){
            while(true){

                if(num2.empty()==1){
                    break;
                }
                int n = num2.back() - '0';
                int m = n + carry;
                if (m>9){
                    rev.push_back(m-10 + '0');
                    carry = 1;
                }
                else {
                    rev.push_back(m + '0');
                    carry = 0;
                }
                num2.pop_back();



            }
            if (carry == 1){
                rev.push_back(1 + '0');
            }
        }

        reverse(rev.begin(), rev.end());

        return rev;


       
    }
};