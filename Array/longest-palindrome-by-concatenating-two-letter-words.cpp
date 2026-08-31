class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mpp;
        for(string s : words){
            mpp[s]++;
        }
        bool found = false;
        int count = 0;
        for(auto k : mpp){
            string s = k.first;
            string r = s;
            reverse(r.begin(),r.end());
            if(s == r){
                count+=(mpp[s]/2)*4;
                if(mpp[s] %2 == 1){
                    found = true;
                }
            }
            else if(s<r && mpp.find(r) != mpp.end()){
                count += min(mpp[s],mpp[r])*4;
            }
        }
        if(found){
            count+=2;
        }
        return count;
    }
};