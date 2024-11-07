class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int n = candidates.size();
        int freq;
        int max_num =0;
        for(int i =0; i<24;i++){
            freq=0;
            for(int& element : candidates ){
                if( element & (1<<i) ){
                    freq++;
                }
            }
            max_num = max(max_num,freq);
        }
        return max_num;
    }
};