class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n/__gcd(2,n))*2;
    }
};