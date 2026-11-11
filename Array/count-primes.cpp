class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        int cnt = 0;
        
        for(int i = 2;i<n;i++){
            bool isPrime = true;
            for(int j = 2;j*j<=i;j++){
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