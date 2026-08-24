class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum1 = 0;
        for(int i = 0;i<nums.size();i++){
            sum1 += nums[i];
            maxSum = max(maxSum,sum1);
            if(sum1<0){
                sum1 = 0;
            }
           
        }
        int totalSum =0 ;
        int sum2=0;
        int miniSum = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        for(int i = 0;i<nums.size();i++){
            sum2+=nums[i];
            miniSum = min(miniSum,sum2);
            if(sum2>0){
                sum2 = 0;
            }
        }
        int maxSum2 = totalSum - miniSum;
        if(maxSum<0){
            return maxSum;
        }
        else{
            return max(maxSum,maxSum2);
        }
    }
};