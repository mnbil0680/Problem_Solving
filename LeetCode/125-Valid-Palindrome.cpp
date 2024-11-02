class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) {
            return true;
        } else {
            string new_string = \\;
            for (long i = 0; i < s.size(); i++) {
                if ( isalpha(s[i]) || (int(s[i])>=48 && int(s[i])<=57 )) {
                    new_string += char(tolower(s[i]));
                }
            }
            for (long i = 0; i < (new_string.size() / 2); i++) {
                if (new_string[i] != new_string[new_string.size() - 1 - i]) {
                    return false;
                }
            }
            return true;
        }
    }
};