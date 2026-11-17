class Solution {
public:
    long long MOD = 1e9 + 7;
    long long pow(long long a,long long b){
        
        long long res = 1;
        while(b>0){
            if(b%2 == 1) res = (res*a)%MOD;
            a = (a*a)%MOD;
            b/=2; 
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        int res = (pow(5,n-n/2)*pow(4,n/2))%MOD;
        return res;
    }
};