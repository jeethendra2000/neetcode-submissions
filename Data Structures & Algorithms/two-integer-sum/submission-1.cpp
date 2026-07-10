class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        
        for(int i = 0; i < nums.size(); i++){
            int num2 = target - nums[i];
            
            if(ump.find(num2) != ump.end())
                return {ump[num2], i};
            
            ump[nums[i]] = i;
        }
        return {};
    }
};

/*
Problem: Two Sum

Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
Return the answer with the smaller index first.

Example 1:
    Input: 
    nums = [3,4,5,6], target = 7
    Output: [0,1]
    Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

Example 2:
    Input: nums = [4,5,6], target = 10
    Output: [0,2]

Example 3:
    Input: nums = [5,5], target = 10
    Output: [0,1]

Constraints:
    2 <= nums.length <= 1000
    -10,000,000 <= nums[i] <= 10,000,000
    -10,000,000 <= target <= 10,000,000
    Only one valid answer exists.

Algorithm: Hash Map (One Pass)
    1. Create a hash map to store the value and index of each element in the array.
    2. Iterate through the array using index i and compute the complement of the current element, which is target - nums[i].
    3. Check if the complement exists in the hash map.
    4. If it does, return the indices of the current element and its complement.
    5. If no such pair is found, return an empty array.

Time & Space Complexity
    Time complexity: O(n)
    Space complexity: O(n)
*/