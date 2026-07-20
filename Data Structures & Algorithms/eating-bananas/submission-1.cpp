class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=*max_element(piles.begin(),piles.end());
        int left=1;
        int right=m;
        int res=-1;
        while (left<=right){
            int k=left+(right-left)/2;
            int time=0;
            for (int i=0; i<piles.size();i++){
                time+=ceil(static_cast<double>(piles[i])/k);
            }
            if (time<=h){
                res=k;
                right=k-1;
            }
            else{
                left=k+1;
            }
        }
        return res;
    }
};
