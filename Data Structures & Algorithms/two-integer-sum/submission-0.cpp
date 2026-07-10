class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        
        for(int i = 0; i < nums.size(); i++){
            int num2 = target - nums[i];
            if(ump.contains(num2))
                return {ump[num2], i};
            
            ump[nums[i]] = i;
        }

    }
};
