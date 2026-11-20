class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        int pairs = 0;
        int leftout = 0;
        unordered_map<int,int > mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
            
        }
        for(int i= 0;i<mpp.size();i++){
            pairs+= mpp[nums[i]]/2;
            leftout += mpp[nums[i]]%2;
        }
        ans.push_back(pairs);
        ans.push_back(leftout);
        return ans;
    }
};