class Solution {
public:
    bool check(string s, int lower, int upper) {
        while (upper > lower) {
            if (s[lower] == s[upper]) {
                lower++;
                upper--;
            }else{
                return false;
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int lower = 0;
        int upper = s.size() - 1;
        while (upper > lower) {
            if (s[lower] == s[upper]) {
                upper--;
                lower++;    
            }else{
                return (check(s, lower + 1, upper) || check(s, lower, upper - 1));
            }
            
        }
        return true;
    }

    

};