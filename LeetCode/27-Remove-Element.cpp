class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0 || (nums.size() == 1 && nums[0]==val)) {
            return 0;
        } 
        else{
            int j = 0; // j is index for unique element
            for (int i = 0; i < nums.size(); i++) {
                if(nums[i] != val ){
                    nums[j] = nums[i];
                    j++;
                }
            }
            return j;
        }
    }
};