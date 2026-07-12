public class Solution {
    public List<List<string>> GroupAnagrams(string[] strs) {
        var anagram = new Dictionary<string, List<string>>();
        var result = new List<List<string>>();

        foreach(var str in strs){
            var key = new string(str.OrderBy(c => c).ToArray());
            
            if (!anagram.ContainsKey(key)) {
                anagram[key] = new List<string>();
            }

            anagram[key].Add(str);
        }

        foreach(var it in anagram){
            result.Add(it.Value);
        }

        return result;
    }
}

/*
Problem: Group Anagrams

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Example 1:
    Input: strs = ["eat","tea","tan","ate","nat","bat"]
    Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:
    There is no string in strs that can be rearranged to form "bat".
    The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
    The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

Example 2:
    Input: strs = [""]
    Output: [[""]]

Example 3:
    Input: strs = ["a"]
    Output: [["a"]]

Constraints:
    1 <= strs.length <= 104
    0 <= strs[i].length <= 100
    strs[i] consists of lowercase English letters.
*/
