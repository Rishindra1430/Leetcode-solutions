class Solution {
public:
    bool isPrime(long long n){
        if(n<2) return false;
        for(int i = 2;(i*i)*1LL<=n;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int cnt = 0;
        for(int i = 2;i*1LL<n;i++){
            if(isPrime(i*1LL)) cnt++;
        }
        return cnt;
    }
};