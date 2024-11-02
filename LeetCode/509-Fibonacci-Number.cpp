class Solution {
public:
    int fib(int n) {
        if(n == 0){
            return 0;
        }else if( n == 1 || n == 2){
            return 1;
        }else{
            int sum=0;
            int oldest =0;
            int old = 1;
            for(int i = 0; i< n-1;i++){
                sum = old + oldest;
                oldest = old;
                old = sum;
            }
            return sum;
        }
    }
};