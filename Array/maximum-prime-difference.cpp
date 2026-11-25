class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i= 2;i*i<=n;i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int l = -1;
        int r = -1;
        for(int i = 0;i<nums.size();i++){
            if(isPrime(nums[i])){
               if(l == -1){
                    l = i;
               }
               r = i;
            }
        }
        return r - l;
    }
};