/* Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:

Input: nums = [1,2,3,1]
Output: true 

Runtime: 20 ms
Memory Usage: 15.6 MB
*/
  

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
for(int i=0;i<nums.size()-1;i++)
{
if(nums[i]==nums[i+1])
{
return 1;
}
}
return 0;
}
    
};
