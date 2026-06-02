//Python code for the problem "Contains Duplicate"
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for num in nums:
            if num in seen:
                return True;
            seen.add(num)
        return False;

//C++ code for the problem "Contains Duplicate" 
//Time complexity: O(n^2) where n is the number of elements in the input vector
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};

//C++ code for the problem "Contains Duplicate" using unordered_set
//Time complexity: O(n) where n is the number of elements in the input vector
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int>seen;
        
        for(int num : nums)
        {
            if(seen.find(num) != seen.end())return true;
            seen.insert(num);
        }

        return false;
    }
};