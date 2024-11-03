class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        while(n%3==0){
            n/=3;
        }
        return n==1;
        /*
        another approch
        ================
        if(n <=0) return false;
        for(long i =0;i<=31;i++){
            long ans =pow(3,i);
            if( ans == n && ans <= n ){
                return true;
            }

        }
        return false;
        */

        /*
        another approch
        ================
        if(n<=0)return false;
        if(n == 1)return true;
        return (n%3==0 && isPowerOfThree(n/3));
        */
    }
};