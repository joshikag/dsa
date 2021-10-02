/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
Example 1:

Input: s = "leetcode"
Output: 0

*/
class Solution {
public:
    int firstUniqChar(string s) {
       int arr[26]={0};
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']++;
        }
        for(int i=0 ;i<s.size();i++){
            if(arr[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
