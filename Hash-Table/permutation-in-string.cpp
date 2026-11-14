class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq_s1(26,0);
        vector<int> window(26,0);
        for(int i = 0;i<s1.size();i++){
            freq_s1[s1[i] - 'a']++;
            window[s2[i] - 'a']++;
        }
        if(freq_s1 == window) return true;
        for(int i = s1.size();i<s2.size();i++){
            window[s2[i] - 'a']++;
            window[s2[i-s1.size()] - 'a']--;
            if(freq_s1 == window) return true;
        }
        return false;
    }
};