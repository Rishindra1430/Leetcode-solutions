class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0;
        int r = n;
        int res = 0;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(1LL*(mid*(mid+1)/2)<=n){
                res = mid;
                l = mid+1;
            }else{
                r = mid -1;
            }
        }
        return res;
    }
};