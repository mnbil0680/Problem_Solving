class Solution {
public:
    bool prime(int x){
        if(x <2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i ==0){
                return false;
            }
        }
        return true;
    }
    bool primeSubOperation(vector<int>& nums) {
        int dif=0;
        for(int i=0; i<nums.size();i++){

            if(i == 0){
                dif = nums[i];
            }else{
                dif = nums[i] - nums[i-1];
            }
            if(dif <=0){
                return false;
            }



            while(--dif && !prime(dif));
            nums[i] -= dif;
            if(i && nums[i] <= nums[i-1]) return false;
        }
        return true;
    }
};