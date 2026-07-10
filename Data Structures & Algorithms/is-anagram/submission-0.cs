public class Solution {
    public bool IsAnagram(string s, string t) {
        Dictionary<char, int> mp = new();

        foreach(var ch in s){
            if(!mp.ContainsKey(ch))
                mp[ch] = 0;
            
            mp[ch]++;
        }

        foreach(var ch in t){
            if(!mp.ContainsKey(ch))
                mp[ch] = 0;

            mp[ch]--;
        }

        foreach(var value in mp.Values){
            if(value != 0){
                return false;
            }
        }

        return true;
    }
}
