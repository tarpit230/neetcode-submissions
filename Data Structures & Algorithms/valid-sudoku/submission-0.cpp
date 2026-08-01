class Solution {
public:
    bool isSubBoxValid(vector<vector<char>>& board, int r1, int r2, int c1, int c2){
        set<char> s;
        for(int i=r1; i<=r2; i++){
            for(int j=c1; j<=c2; j++){
                if(board[i][j] == '.') continue;
                if(s.find(board[i][j]) != s.end()) return false;
                s.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        for(int i=0; i<row; i++){
            set<char> s;
            for(int j=0; j<col; j++){
                if(board[i][j] == '.') continue;
                if(s.find(board[i][j]) != s.end()) return false;
                s.insert(board[i][j]);
            }
        }

        for(int i=0; i<col; i++){
            set<char> s;
            for(int j=0; j<row; j++){
                if(board[j][i] == '.') continue;
                if(s.find(board[j][i]) != s.end()) return false;
                s.insert(board[j][i]);
            }
        }
        int r1=0, r2=2;
        while(r1 < row){
            int c1=0, c2=2;
            while(c1 < col){
                if(!isSubBoxValid(board, r1, r2, c1, c2))
                    return false;
                c1 += 3; c2 += 3;
            }
            r1 += 3; r2 += 3;
        }
        return true;
    }
};
