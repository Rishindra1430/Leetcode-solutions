class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0;
        int l = 0;
        int r = 0;
        int maxfreq = 0;
        unordered_map<char,int>mpp;
        while(r<s.size()){
            mpp[s[r]]++;
            maxfreq = max(maxfreq,mpp[s[r]]);
            
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