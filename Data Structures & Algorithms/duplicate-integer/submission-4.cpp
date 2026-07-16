class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> count;
        for (int i=0;i<nums.size();i++){
            if (count.contains(nums[i]))return true;
            count.insert(nums[i]);
        }
        return false;
    }
};