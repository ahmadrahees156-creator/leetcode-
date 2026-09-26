class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m= mat.size();
        int n=mat[0].size();
        int ans=0;

        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    int col=0;
                    int row=0;
                 for(int k=0;k<n;k++){
                    if(mat[i][k]==1) row++;
                 }
                 for(int k=0;k<m;k++){
                    if(mat[k][j]==1) col++;
                 }
                 if(row==1 && col==1) ans++;

                }
            }
        }
        return ans;
        
    }
};