class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }

        vector<int> count(26, 0);

        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int val: count){
            if(val != 0)
                return false;
        }

        return true;
    }
};

/* 
Problem: Valid Anagram
    
    Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.
    An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.
    
    Example 1:
    Input: s = "racecar", t = "carrace"
    Output: true
    
    Example 2:
    Input: s = "jar", t = "jam"
    Output: false
    
    Constraints:
    1 <= s.length, t.length <= 5 * 10^4
    s and t consist of lowercase English letters. 
    
Algorithm
    1. If the lengths of the strings differ, return false immediately.
    2. Create a frequency array count of size 26 initialized to 0.
    3. Iterate through both strings:
        * Increment the count at the index corresponding to s[i].
        * Decrement the count at the index corresponding to t[i].
    4. After processing both strings, scan through the count array:
        * If any value is not 0, return false because the frequencies differ.
    5. If all values are 0, return true since the strings are anagrams. 
 
Time & Space Complexity   
    Time complexity: O(n+m)
    Space complexity: O(1) since we have at most 26 different characters.
    
    Where n is the length of string s and m is the length of string t.
*/
