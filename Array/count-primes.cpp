class Solution {
public:
    bool isPrime(long long n){
        if(n<2) return false;
        for(int i = 2;(i*i)<=n;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int cnt = 0;
        if(n>2) cnt = 1;
        for(int i = 3;i<n;i+=2){
            if(isPrime(i)) cnt++;
        }
        return cnt;
    }
};