class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum = 0;
        int maxSum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            maxSum = max(maxSum,sum);
            if(sum < 0){
                sum  =0;
            }
        }
        int sum2 = 0;
        int minSum = 0;
        for(int i =0;i<nums.size();i++){
            sum2+=nums[i];
            minSum = min(minSum,sum2);
            if(sum2>0){
                sum2=0;
            }
        }
        return max(maxSum,abs(minSum));
    }
};