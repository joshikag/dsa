//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

//Return the running sum of nums.
//4ms solution
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) return nums;
        for(int i=1; i <nums.size(); i++) nums[i] += nums[i-1];
        return nums;
    }
};
