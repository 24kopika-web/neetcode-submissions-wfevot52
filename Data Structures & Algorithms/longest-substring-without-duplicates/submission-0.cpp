class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int longest_length=0;
        unordered_set<char> longest_substring;
        while (r<s.length()){
            if (longest_substring.find(s[r])==longest_substring.end()){
                longest_substring.insert(s[r]);
                longest_length=max(longest_length,r-l+1);
                r++;
            }
            else{
                longest_substring.erase(s[l]);
                l++;
            }
        }
        return longest_length;
    }
};
