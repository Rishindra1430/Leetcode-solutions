class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1;
        int maxProduct = 0;
        for(int i =0 ;i<nums.size();i++){
            product*=nums[i];
            maxProduct = max(maxProduct,product);
            if(product < 0){
                product = 1;
            }
        }
        
         return maxProduct;
        
    }
};