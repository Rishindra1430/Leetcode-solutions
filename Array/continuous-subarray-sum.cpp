class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> preSum;
        bool isTrue = false;
        for(int i =0 ;i<nums.size();i++){
            preSum.push_back(nums[i]);
            if(preSum[i]%k == 0){
                isTrue = true;
            } 
        }
        return isTrue;
    }
};