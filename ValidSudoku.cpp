/*

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

Example 1:
Input: board = 
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true

*/


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N=board.size();
        unordered_set<char>rowset[N],colset[N],boxset[N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                int boxno=(i/3)*3+(j/3);
                char val=board[i][j];
                if(val=='.'){
                    continue;
                }
                if(rowset[i].count(val) || colset[j].count(val) || boxset[boxno].count(val)){
                    return false;
                }
                rowset[i].insert(val);
                colset[j].insert(val);
                boxset[boxno].insert(val);
            }
        }
        return true;
    }
};
