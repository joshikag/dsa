/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/




class Solution {
public:
       
   int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0], curSum = 0;
        
        for (int n : nums) {
            if(curSum<0){
                curSum=0;
            }
            curSum += n;
            maxSub = max(maxSub, curSum);
        }
        return maxSub;
    }
};




//Solution-2(Kadane’s Algorithm)
//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
     if(nums.size() == 0)
            return 0;
        
        int sum = 0;
        int res = INT_MIN;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            
            res = max(res, sum);
            
            if(sum < 0)
                sum = 0;
        }
    
        return res;
    }
};
