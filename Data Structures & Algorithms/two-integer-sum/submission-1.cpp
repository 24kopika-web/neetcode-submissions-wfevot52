class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> dup;
        for (int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if (dup.count(complement)){
                return {dup[complement],i};
            }
            dup[nums[i]]=i;
        }
        return {};
    }
};
