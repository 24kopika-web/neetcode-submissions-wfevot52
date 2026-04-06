class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size()+1);
        for (const auto&num : nums){
            count[num]++;
        }
        for (auto entry:count){
            freq[entry.second].push_back(entry.first);
        }

        vector <int>res;
        for (int i=freq.size()-1;i>0;i--){
            for (auto n:freq[i]){
                res.push_back(n);
                if (res.size()==k){
                    return res;
                }
            }
        }
    }
};
