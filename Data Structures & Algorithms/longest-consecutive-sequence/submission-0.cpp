class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int curr=nums[0];
        int res=0;
        int streak=0;
        int i=0;
        while (i<nums.size()){
            if (curr!=nums[i]){
                curr=nums[i];
                streak=0;
            }
            while (i<nums.size()&&nums[i]==curr){
                i++;
            }
            streak+=1;
            curr+=1;
            res=max (res,streak);
            }
            return res;
    }
};
