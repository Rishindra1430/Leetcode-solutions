class Solution {
public:
    int upperBound(vector<int> prefix,int target){
        int l = 0;
        int h = prefix.size() -1;
        int ans = prefix.size();
        while(l<=h){
            int mid = l + (h-l)/2;
            if(prefix[mid] <= target){
                l = mid+1;
            }
            else {
                ans = mid ;
                h = mid -1;
            }
        }
        return ans;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int> prefix;
        int sum = 0;
        for(int i =0 ;i<nums.size();i++){
            sum += nums[i];
            prefix.push_back(sum);
        }
        vector<int> ans;
        for(int i =0 ;i<queries.size();i++){
            ans.push_back(upperBound(prefix,queries[i]));
        }
        return ans;
    }
};