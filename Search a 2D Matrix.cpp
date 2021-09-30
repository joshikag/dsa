/*
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        int c=matrix[0].size()-1;
        bool found=false;
        while(1){
            if(r<0 || c<0 || c>=matrix[0].size() || r>=matrix.size()){
                found =false;
                break;
            }
            
            
            if(target>matrix[r][c]){
                r++;
            }
            else if(matrix[r][c]==target){
                found=true;
                break;
            }
            else c--;
        }
        return found;
        
    }
};
