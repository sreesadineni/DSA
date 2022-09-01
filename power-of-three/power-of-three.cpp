class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n>0 and n==pow(3, int(log2(n)/log2(3)))) return true;       
        return false;
    }
};