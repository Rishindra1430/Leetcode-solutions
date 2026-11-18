class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int r = n;
        int res = n;
        while(l<=r){
            int mid = l + (r-l)/2;
            if((mid*(mid+1)/2)<n){
                res = mid;
                l = mid+1;
            }else{
                r = mid -1;
            }
        }
        return res;
    }
};