class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> preSum;
        for(int i =0 ;i<nums.size();i++){
            preSum.push_back(nums[i]);
            if(preSum[i]%k == 0){
                return true;
            }
        }
        return false;
    }
};