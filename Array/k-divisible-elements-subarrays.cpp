class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>> st;
        int l = 0;
        
        while(l<nums.size()){
            int cnt =0;
            int r = l;
            vector<int> temp;
            while(r<nums.size()){
                temp.push_back(nums[r]);
                if(nums[r]%p == 0){
                    cnt++;
                }
                if(cnt>k){
                    break;
                }
                st.insert(temp);
                r++;
            }
            l++;    
        }
        return st.size();
            }
};