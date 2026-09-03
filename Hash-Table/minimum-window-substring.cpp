class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mpp;
        int cnt = 0;
        int minlen = INT_MAX;
        int l = 0;
        int r =0;
        int sIndx = -1;
        for(int i =0;i<t.size();i++){
             mpp[t[i]]++;
        }
        while(r<s.size()){
            if(mpp[s[r]] > 0) cnt = cnt+1;
            mpp[s[r]]--;
            while(cnt == t.size()){
                if(r-l+1 < minlen){
                    minlen = r-l+1;
                    sIndx = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) cnt = cnt -1;
                l+=1;
            }
            r+=1;
        }
        return sIndx == -1 ? "": s.substr(sIndx,minlen);
        
    }
};