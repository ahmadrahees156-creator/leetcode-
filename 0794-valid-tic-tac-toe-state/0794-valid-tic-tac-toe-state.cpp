class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        
        int x = 0;
        int o = 0;
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] == 'X')
                    x++;
                else if(board[i][j] == 'O')
                    o++;
            }
        }
        
        bool xwin = false;
        bool owin = false;
        
        for(int i = 0; i < 3; i++) {
            if(board[i][0] == 'X' &&
               board[i][1] == 'X' &&
               board[i][2] == 'X')
                xwin = true;
            
            if(board[i][0] == 'O' &&
               board[i][1] == 'O' &&
               board[i][2] == 'O')
                owin = true;
        }
        
        for(int j = 0; j < 3; j++) {
            if(board[0][j] == 'X' &&
               board[1][j] == 'X' &&
               board[2][j] == 'X')
                xwin = true;
            
            if(board[0][j] == 'O' &&
               board[1][j] == 'O' &&
               board[2][j] == 'O')
                owin = true;
        }
        
        // diagonals
        if(board[0][0] == 'X' &&
           board[1][1] == 'X' &&
           board[2][2] == 'X')
            xwin = true;
        
        if(board[0][0] == 'O' &&
           board[1][1] == 'O' &&
           board[2][2] == 'O')
            owin = true;
        
        if(board[0][2] == 'X' &&
           board[1][1] == 'X' &&
           board[2][0] == 'X')
            xwin = true;
        
        if(board[0][2] == 'O' &&
           board[1][1] == 'O' &&
           board[2][0] == 'O')
            owin = true;
        
        
        if(xwin && owin)
            return false;
        
        if(xwin)
            return x == o + 1;

        if(owin)
            return x == o;

        return x == o || x == o + 1;
    }
};