class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result;
        vector<vector<string>> ans;
        for(auto str: strs){
            vector<int> count(26, 0);
            for(auto ch: str) count[ch - 'a']++;

            string key;
            for(auto ct: count) key += ',' + to_string(ct);

            result[key].push_back(str);
        }

        for(auto it: result){
            ans.push_back(it.second);
        }
        return ans;
    }
};
