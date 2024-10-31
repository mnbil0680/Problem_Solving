class Solution {
public:
    // using  Babylonian Method
    // Xn+1 = 0.5 * (Xn + S/Xn) such that S ==> argument
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        } else {
            x = double(x);
            double temp = 1;
            for (int i = 0; i <= 100; i++) {
                temp = (0.5) * (temp + x / temp);
            }
            return int(temp);
        }
    }
};