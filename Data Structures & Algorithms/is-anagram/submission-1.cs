public class Solution {
    public bool IsAnagram(string s, string t) {
        int[] freq = new int[26];

        foreach(var ch in s) freq[ch - 'a']++;
        foreach(var ch in t) freq[ch - 'a']--;

        foreach(var count in freq){
            if(count != 0)
                return false;
        }

        return true;
    }
}
