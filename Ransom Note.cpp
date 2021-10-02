/*
Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false

*/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(char c:magazine){
            arr[c-'a']++;
        }
        for(char c:ransomNote){
            if(arr[c-'a']==0)
                return false;
            arr[c-'a']--;
        }
        return true;
        
        
    }
};
