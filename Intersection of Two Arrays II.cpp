/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int> visited;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            visited[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(visited.count(nums2[i]) && --visited[nums2[i]]>=0){
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
    
};
