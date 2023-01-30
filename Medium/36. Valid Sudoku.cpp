class Solution {
public:
    // helper-function-2
    bool isSafe(vector<vector<char>>& board, char num, int row, int col){
        bool res = true;

        // is safe in row
        for(int i=0 ; i < 9 ; i++){
            if(board[i][col] == num){
                res = false;
                break;
            }
        }

        // is safe in column
        for(int i=0 ; i < 9 ; i++){
            if(board[row][i] == num){
                res = false;
                break;
            }
        }

        // is safe in 3x3 grid
        for(int i=0 ; i < 3 ; i++){
            for(int j=0 ; j < 3 ; j++){
                if(board[row - row%3 + i][col - col%3 + j] == num){
                    res = false;
                    break;
                }
            }
        }

        // returning the result
        return res;
    }

    // helper-function-1
    bool sudokuHelper(vector<vector<char>>& board){
        for(int i=0 ; i < 9 ; i++){
            for(int j=0 ; j < 9 ; j++){
                if(board[i][j] != '.'){
                    char temp = board[i][j];
                    board[i][j] = '.';
                    if(!isSafe(board, temp, i, j)){
                        return false;
                    }
                    board[i][j] = temp;
                }
            }
        }
        return true;
    }

    // main-function
    bool isValidSudoku(vector<vector<char>>& board) {
        if(sudokuHelper(board)){
            return true;
        }
        return false;
    }
};