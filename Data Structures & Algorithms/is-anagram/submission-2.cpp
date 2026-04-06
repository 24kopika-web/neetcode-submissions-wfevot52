class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> countS;
        unordered_map<char,int> countT;
        for (const char& s1:s){
            countS[s1]++;
        }
        for (const char& t1:t){
            countT[t1]++;
        }
        return countS==countT;
    }
};
