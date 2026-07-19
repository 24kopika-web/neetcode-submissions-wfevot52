class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //find the correct row
        int m=matrix.size();
        int n=matrix[0].size();
        int upper=0;
        int lower=m-1;
        int right=n-1;
        int mid= (upper+lower)/2;
        if (matrix[lower][right]<target||matrix[upper][0]>target){
            return false;
        }
        while (!(matrix[mid][0]<=target && matrix[mid][right]>=target)){
           if (upper==lower||upper>lower){
            return false;
           }
           if (matrix[mid][0]<target){
            upper=mid+1;
            mid=upper+(lower-upper)/2;
           }
           else {
            lower=mid-1;
            mid=upper+(lower-upper)/2;
           }
        }

        // find whether the element exist in matrix
        int left=0;
        int middle=(left+right)/2;
        while (matrix[mid][middle]!=target){
            if(left==right||left>right){
                return false;
            }
            if (matrix[mid][middle]<target){
                left=middle+1;
                middle=left+(right-left)/2;
            }
            else{
                right=middle-1;
                middle=left+(right-left)/2;
            }
        }
        return true;
    }
};
