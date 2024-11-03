class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        if(n == 1) return true;
        return(n%2 ==0 && isPowerOfTwo(n/2));
        /*
        Another approch
        ===============
        if(n==0)return false;
        return floor(log2(n)) == ceil(log2(n)) ? true : false;

        Another approch
        ===============
        return  (n>0 && (n & (n-1))==0) ? true:false;

        */
    }
};