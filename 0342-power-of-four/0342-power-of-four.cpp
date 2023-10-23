class Solution {
public:
    bool isPowerOfFour(int n) {
     return (n > 0 and pow(4, int(log2(n)/log2(4))) == n);   
    }
};