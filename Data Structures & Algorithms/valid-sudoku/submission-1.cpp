class Solution {
public:
bool check_sizes(vector<vector<char>> board){
    int check_size = 0;
    if (board.size()==9){
        check_size++;
    }
    for (int i =0 ;i<board.size();i++){
        if (board[i].size()==9){
            check_size++;
        }
    }
    if (check_size!=10){
        return false;
    }
    else return true;
}
bool check_row(vector<vector<char>> board){
    for (int i=0;i<board.size();i++){
        unordered_set<char> seen;
        for (int j=0;j<board.size();j++){
            if (board[i][j]!='.'){
                if (seen.count(board[i][j])){
                    return false;
                }
                else{
                    seen.insert(board[i][j]);
                }
            } 
        }
    }
    return true;
}
bool check_column(vector<vector<char>> board){
    for (int i=0;i<board.size();i++){
        unordered_set<char> seen;
        for (int j =0;j<board.size();j++){
            if (board[j][i]!='.'){
                if (seen.count(board[j][i])){
                    return false;
                }
                else{
                    seen.insert(board[j][i]);
                }
            } 
        }
    }
    return true;
}
bool check_square(vector<vector<char>> board){
    for (int r=0;r<board.size();r+=3){
        for (int c =0;c<board.size();c+=3){
            unordered_set<char> seen;
            for (int i=0;i<3;i++){
                for (int j=0;j<3;j++){
                    if (board[r+i][c+j]!='.'){
                        if (seen.count(board[r+i][c+j])){
                            return false;
                        }
                        else{
                            seen.insert(board[r+i][c+j]);
                        }
                    }
                }
            }
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
            if (check_sizes(board) && check_column(board) && check_row(board) && check_square(board)){
        return true;
    }
    else return false;
    }
};
