class Solution {
public:
    #define pass (void)0
    /* Original | New | State
           0    |  0  |   0
           1    |  0  |   1
           0    |  1  |   2
           1    |  1  |   3       */
    void check(vector<vector<int>>& board, int r, int c, int rows, int cols){
            int zero=0,one=0;
            if(r+1<rows) board[r+1][c] == 0||board[r+1][c]==2 ? ++zero : ++one ;
            if(r-1>=0) board[r-1][c] == 0||board[r-1][c]==2 ? ++zero : ++one ;
            if(r+1<rows && c+1<cols) board[r+1][c+1]==0||board[r+1][c+1]==2 ? ++zero : ++one;
            if(r+1<rows && c-1>=0) board[r+1][c-1] == 0||board[r+1][c-1]==2 ? ++zero : ++one;
            if(r-1>=0 && c+1<cols) board[r-1][c+1] == 0||board[r-1][c+1]==2 ? ++zero : ++one;
            if(r-1>=0 && c-1>=0) board[r-1][c-1] == 0||board[r-1][c-1]==2 ? ++zero : ++one;
            if(c+1<cols) board[r][c+1]==0||board[r][c+1]==2 ? ++zero : ++one;
            if(c-1>=0) board[r][c-1]==0 || board[r][c-1]==2 ? ++zero : ++one;
                
            if(board[r][c] == 1 && one<2) board[r][c] = 1; // 0
            else if(board[r][c] == 1 && (one == 2 || one == 3)) board[r][c] = 3; // 1
            else if(board[r][c] == 1 && one>3) board[r][c] = 1; // 0
            else if(board[r][c] == 0 && one==3) board[r][c] = 2; // 1
        }
    void gameOfLife(vector<vector<int>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        
        for(int r=0; r<rows; r++){
            for(int c=0; c<cols; c++){
                check(board, r, c, rows,cols);
            }
        }    
        for(int r=0; r<rows; r++){
            for(int c=0; c<cols; c++){
                if(board[r][c] == 2 || board[r][c] == 3) board[r][c] = 1;
                else if(board[r][c] == 1 || board[r][c] == 0)  board[r][c]= 0;
            }
        }    
    }
};
