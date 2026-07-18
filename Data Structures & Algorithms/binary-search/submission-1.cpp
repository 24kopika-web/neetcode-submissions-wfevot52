class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=(right-left)/2;
        while (nums[mid]!=target){
            if (left==right||right<0||left>right){
                return -1;
            }
            if (nums[mid]<target){
                left=mid+1;
                mid=left+(right-left)/2;
            }
            else{
                right=mid-1;
                mid=left+(right-left)/2;
            }
        }
        return mid;
    }
};
