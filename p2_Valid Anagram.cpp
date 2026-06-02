//Problem Link:https://neetcode.io/problems/valid-anagram/question?list=neetcode150
//Python code for the problem "Valid Anagram"
//Time complexity: O(nlogn) where n is the length of the input strings
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sorted_s = ''.join(sorted(s))
        sorted_t = ''.join(sorted(t))
        if(sorted_s == sorted_t)return True;
        return False;

//python code for the problem "Valid Anagram" using hash map
//Time complexity: O(n) where n is the length of the input strings
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
    
        if len(s) != len(t):
            return False
        
        countS, countT = {}, {}
        
        for i in range(len(s)):
            countS[s[i]] = 1 + countS.get(s[i], 0)
            countT[t[i]] = 1 + countT.get(t[i], 0)
            
        return countS == countT

//Using just one hash map
//Time complexity: O(n) where n is the length of the input strings
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
    
        if len(s) != len(t):
            return False
        
        count = {}
        
        for i in range(len(s)):
            count[s[i]] = 1 + count.get(s[i], 0)
            count[t[i]] =  count.get(t[i], 0) - 1
            
        for val in count.values():
            if val != 0:
                return False
        return True
