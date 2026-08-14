class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int cnt=0;
        for(int i = 0;i+k<=s.size();i++){
            string temp = s.substr(i,k);
            int x = stoi(temp);
            if(x!=0 && x % 2 ==0){
                cnt++;
            }
        }
        return cnt;
    }
};