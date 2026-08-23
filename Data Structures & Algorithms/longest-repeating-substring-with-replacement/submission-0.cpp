class Solution {
public:
    int characterReplacement(string s, int k) {
        std::vector<int> count(26,0);
        int LP=0;
        int max_count=count[s[LP]-'A'];
        int max_length=0;
        for (int RP=0;RP<s.length();RP++){
            count[s[RP]-'A']++;
            max_count=max(max_count,count[s[RP]-'A']);
            while (RP-LP+1-max_count>k){
                count[s[LP]-'A']--;
                LP++;
            }
            max_length=max(max_length, RP-LP+1);
        }
        return max_length;
    }
};
