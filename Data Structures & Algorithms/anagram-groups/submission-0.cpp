class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;
        vector<vector<string>> ans;
        for(auto str: strs){
            string key = str;
            sort(key.begin(), key.end());

            result[key].push_back(str);
        }

        for(auto it: result){
            ans.push_back(it.second);
        }
        return ans;
    }
};
