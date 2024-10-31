class Solution {
public:
    bool isPerfectSquare(int num) {
            num = double(num);
            double temp = 1;
            for (int i = 0; i <= 100; i++) {
                temp = (0.5) * (temp + num / temp);
            }
            if(temp == double(int(temp))){
                return true;
            }else{
                return false;
            }
    }
};