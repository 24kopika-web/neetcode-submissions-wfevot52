class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid=0;
        while (l<r){
            mid=l+(r-l)/2;
            if (nums[mid]<=nums[r]){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        r=nums.size()-1;
        if (nums[l]<=target&&target<=nums[r]){
            while (l<=r){
                mid=l+(r-l)/2;
                if (nums[mid]==target){
                    return mid;
                }
                if (nums[mid]<target){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            return -1;
        }
        if (l>=1){
            r=l-1;
            l=0;
            if (nums[l]<=target&&nums[r]>=target){
                while (l<=r){
                mid=l+(r-l)/2;
                if (nums[mid]==target){
                    return mid;
                }
                if (nums[mid]<target){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            return -1;
            }
        }
        return -1;
    }
};
