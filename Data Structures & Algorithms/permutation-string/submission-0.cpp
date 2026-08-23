class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length()>s2.length()){
            return false;
        }
        std::vector<int> count (26,0);
        std::vector<int> count_check (26,0);
        int LP=0;
        int RP=LP+s1.length()-1;
        for (int i=0;i<=RP;i++){
            count_check[s2[i]-'a']++;
        }
        for (int i=0;i<s1.length();i++){
            count[s1[i]-'a']++;
        }
        for (LP=0;LP<s2.length()-s1.length()+1;LP++){
            if (count_check==count){
                return true;
            }
            else{
                if (RP==s2.length()-1){
                    break;
                }
                else{
                count_check[s2[LP]-'a']--;
                RP++;
                count_check[s2[RP]-'a']++;
            }
            }
        }
        return false;
    }
};
