class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        int n = score.size();
        for(int i = 0; i < n - 1; i++) {  
            int maxIndex = i;
            for(int j = i + 1; j < n; j++) {
                if(score[j][k] > score[maxIndex][k]) {
                    maxIndex = j;
                }
            }
            swap(score[i], score[maxIndex]);
        }
        return score;
    }
};