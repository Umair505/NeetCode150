Problem Link:https://neetcode.io/problems/anagram-groups/question?list=neetcode150

class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        # এমন একটি ডিকশনারি নিলাম যার ডিফল্ট ভ্যালু হবে একটি লিস্ট
        ansMap = collections.defaultdict(list)
        
        for s in strs:
            count = [0] * 26 # a থেকে z পর্যন্ত ২৬টি অক্ষরের জন্য
            
            for char in s:
                # অক্ষরের অ্যাসকি (ASCII) মান থেকে 'a' এর মান বিয়োগ করে ইনডেক্স বের করছি
                count[ord(char) - ord('a')] += 1
                
            # কাউন্ট লিস্টকে টুপল বানিয়ে Key হিসেবে সেট করছি এবং শব্দটি লিস্টে যোগ করছি
            ansMap[tuple(count)].append(s)
            
        # শুধু ভ্যালুগুলো (অ্যানাগ্রামের গ্রুপ) রিটার্ন করছি
        return list(ansMap.values())

C++ Solution
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ansMap;
        
        for(string s : strs)
        {
            string key = s;
            sort(key.begin(),key.end());
            ansMap[key].push_back(s);
        }
        vector<vector<string>>result;
       for (auto& pair : ansMap) {
            result.push_back(pair.second); 
        }
        return result;
    }
};
