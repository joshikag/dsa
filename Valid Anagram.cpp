/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
 if(s.size()!=t.size())
            return false;
        
        vector<int>hsh(26,0);   
        for(auto val:s)
            hsh[val-97]++;
        for(auto val:t)
            hsh[val-97]--;
        
        for(int i=0;i<26;i++)
        {
            if(hsh[i]!=0)
                return false;
        }
        return true;
        
   
    }
};

//Sol 2
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return s==t;
    }
};
