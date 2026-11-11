class Solution {
public:
    int countPrimes(int n) {
        if(n<=1){
            return 0;
        }
        int cnt = 0;
        bool isPrime = true;
        for(int i = 2;i<n;i++){
            for(int j = 2;j<i;j++){
                if(i%j == 0){
                    isPrime = false;
                }
            }
            if(isPrime){
                cnt++;
            }
        }
        return cnt;
    }
};