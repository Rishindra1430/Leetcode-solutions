class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0;
        int l = 0;
        int r = 0;
        unordered_map<char,int>mpp;
        while(r<s.size()){
            mpp[s[r]]++;
            int maxfreq = 0;
            for(auto p: mpp){
                maxfreq = max(maxfreq,p.second);
            }
            if((r-l+1) - maxfreq <= k){
                maxlen = max(maxlen , r-l+1);
            }
            else{
                mpp[s[l]]--;
                l++;
            }
            r++;
        }
        return maxlen;
         
    } 
};