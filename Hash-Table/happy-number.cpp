class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        
        while(n != 1){
            int sum = 0;
            if(st.find(n) != st.end()){
                return false;
            }
            st.insert(n);
            while(n!=0){
                int last = n%10;
                sum+= last*last;
                n/=10;
            }
            n = sum;
        }
        return true;
    }
};