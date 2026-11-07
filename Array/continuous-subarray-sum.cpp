class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int preSum =0 ;
        mpp[0] = 0;
        bool isTrue = false;
        for(int i =0 ;i<nums.size();i++){
            preSum  = (preSum+nums[i])%k;
            if(mpp.find(preSum) != mpp.end()){
                if(i+1 - mpp[preSum] >= 2) return true;
            } else{
                mpp[preSum] = i+1;
            }
        }
        return false;
    }
};