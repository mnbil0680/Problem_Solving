class Solution {
public:
// __builtin_popcount()
    bool my_is_sorted(vector<int>& nums){
        for(int i =1; i<=nums.size()-1;i++){
            if(nums[i]<nums[i-1]){
                return false;
            }
        }
        return true;
    }
    bool canSortArray(vector<int>& nums) {
        if(my_is_sorted(nums)){
            return true;
        }else{
            for(int i =0; i<nums.size()-1;i++){
                for(int j =0; j<nums.size()-1;j++){
                    if( nums[j] >nums[j+1] &&  __builtin_popcount(nums[j]) == __builtin_popcount(nums[j+1]) ){
                        swap(nums[j], nums[j + 1]);
                    }else if(nums[j] >nums[j+1] &&__builtin_popcount(nums[j])!= __builtin_popcount(nums[j+1])){
                        return false;
                    }
                }
            }
            return true;
        }
        //return true; ==> Sorted || sort by set bits
        //return false;==> Cannot sort by set bits
    }
};