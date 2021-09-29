/*

Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

*/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       int i=0;
        int n=numRows;
        vector<vector<int>> ans;
        ans.resize(n);
        ans[0].push_back(1);
        
        for(int i=1;i<n;i++){
            int k=ans[i-1].size();
            ans[i].push_back(ans[i-1][0]);
            for(int j=1;j<k;j++){
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
                        ans[i].push_back(ans[i-1][k-1]);
            }
            
        return ans;
    }
};
