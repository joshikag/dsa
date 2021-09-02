/* You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth. */
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int mx=0;

for(int i=0;i<accounts.size();i++)   
{   int sum=0;

     for( int j=0;j<accounts[0].size();j++)
     { 
         sum+= accounts[i][j];
     }
         mx=max(mx,sum);
}

    return mx;
    }
};
