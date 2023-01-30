class Solution {
public:
    // helper-function-3
    bool isSafe(vector<vector<char>>& board, int num, int row, int col){
        bool res = true;

        // is safe in column
        for(int i=0 ; i < 9 ; i++){
            if(board[i][col] == '0' + num){
                res = false;
                break;
            }
        }

        // is safe in row
        for(int i=0 ; i < 9 ; i++){
            if(board[row][i] == '0' + num){
                res = false;
                break;
            }
        }

        // is safe in 3x3 grid
        for(int i=0 ; i < 3 ; i++){
            for(int j=0 ; j < 3 ; j++){
                if(board[row - row%3 + i][col - col%3 + j] == '0' + num){
                    res = false;
                    break;
                }
            }
        }

        // returning the result
        return res;
    }

    // helper-function-2
    bool findEmptyLocation(vector<vector<char>>& board, int* row, int* col){
        for(int i=0 ; i < 9 ; i++){
            for(int j=0 ; j < 9 ; j++){
                if(board[i][j] == '.'){
                    *row = i;
                    *col = j;
                    return true;
                }
            }
        }
        return false;
    }

    // helper-function-1
    bool sudokuHelper(vector<vector<char>>& board){
        int row, col;
        if(!findEmptyLocation(board, &row, &col)){
            return true;
        }

        for(int i=1 ; i <= 9 ; i++){
            if(isSafe(board, i, row, col)){
                board[row][col] = '0' + i;
                if(sudokuHelper(board)){
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }

    // main-function
    void solveSudoku(vector<vector<char>>& board) {
        sudokuHelper(board);
    }
};