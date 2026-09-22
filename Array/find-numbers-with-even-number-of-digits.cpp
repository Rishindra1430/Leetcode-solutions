class Solution {
public:
    int integer(string s){
        return s.size();
    }
    int findNumbers(vector<int>& nums) {
        int size = 0;
        for(int i =0 ;i<nums.size();i++){
            string s = to_string(nums[i]);
            if(integer(s) %2 ==0){
                size++;
            }
        }
        return size;
    }
    
};