class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        if(n<3){
            return false;
        }
       vector<int> leftMin(n);

    leftMin[0] = nums[0];

    for (int i = 1; i < n; i++) {
        leftMin[i] = min(leftMin[i - 1], nums[i]);
    }
    for(int j = n-1;j>=0;j--){
        if(nums[j] == leftMin[j]){
            continue;
        }
        while(!st.empty() && st.top() <= leftMin[j]){
            st.pop();
        }
        if(!st.empty() && st.top() < nums[j]){
            return true;
        }
        st.push(nums[j]);
    }
    return false;
    }
};