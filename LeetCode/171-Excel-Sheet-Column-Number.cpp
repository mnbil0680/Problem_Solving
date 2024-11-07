#pragma GCC target (\sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx\)
#pragma GCC optimize (\O3\, \unroll-loops\)
#pragma GCC optimize (\-ffloat-store\)

auto init = []() { 
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
} ();
class Solution {
public:
    int titleToNumber(string columnTitle) {
       
        // int('A') ==> 65 - 64 ==> 1
        // int(''Z) ==> 90 - 64 ==> 26
        long sum =0;
        int n = columnTitle.size();
        for(int i =0; i< n; i++){
            sum += pow(26,i) * ( int(columnTitle[n-1-i]) -64);
        }
        return sum;
    }
};