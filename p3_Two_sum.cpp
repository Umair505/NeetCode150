Problem Link:https://neetcode.io/problems/two-sum/question?list=neetcode150
//Python code for the problem "Two Sum"
//Time complexity: O(n) where n is the length of the input array
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_to_index = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            
            if complement in num_to_index:
                return [num_to_index[complement], i]
            
            num_to_index[num] = i
        
        return []

//c+=+ code for the problem "Two Sum"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
};
