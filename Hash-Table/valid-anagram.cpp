class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;
        bool isTrue = true;
        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(char c : t){
            if(mpp.find(c) == mpp.end()){
                isTrue = false;
            }
            mpp[c]--;
            if(mpp[c]<0){
                isTrue = false;
            }

        }
        return isTrue;
        
    }
};