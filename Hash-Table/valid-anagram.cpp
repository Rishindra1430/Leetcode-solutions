class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> mpp;
        bool isTrue = true;
        if(s.size() != t.size()){
           isTrue = false;
        }
        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(char c : t){
            if(mpp.find(c) == mpp.end()){
                isTrue = false;
            }
            mpp[c]--;
            

        }
        return isTrue;
        
    }
};