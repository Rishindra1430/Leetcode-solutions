class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0;
        int r = n;
        int res = 0;

        while(l<=r){
            int mid = l + (r-l)/2;
            long long coins = 1LL*mid*(mid+1)/2;
            if(coins<=n){
                res = mid;
                l = mid+1;
            }else{
                r = mid -1;
            }
        }
        return res;
    }
};