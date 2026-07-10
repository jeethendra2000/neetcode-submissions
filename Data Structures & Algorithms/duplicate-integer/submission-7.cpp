class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        return st.size() < nums.size();
    }
};

/*
Problem: Contains Duplicate

Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Example 1:
    Input: nums = [1, 2, 3, 3]
    Output: true

Example 2:
    Input: nums = [1, 2, 3, 4]
    Output: false

Constraints:
    0 <= nums.length <= 10^5
    -10^9 <= nums[i] <= 10^9

Algorithm
    1. Convert the array into a hash set, which removes duplicates.
    2. Compare the size of the set with the size of the original array.
    3. If the set is smaller, return true because duplicates must have been removed.
    4. Otherwise, return false.

Time & Space Complexity
    Time complexity: O(n)
    Space complexity: O(n)
*/