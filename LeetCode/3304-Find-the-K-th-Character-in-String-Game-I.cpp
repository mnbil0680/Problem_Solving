class Solution {
public:
    string generate(string s) {
        string result = "";
        for (long i = 0; i < s.size(); i++) {
            if (int(s[i]) == 90) {
                result += "A";
            } else if (int(s[i]) == 122) {
                result += "a";
            } else {
                result += s[i] + 1;
            }
        }
        return result;
    }

    char kthCharacter(int k) {
        string word = "a";
        while(word.size()<k){
            string newString = "";

            // Generate the new string by changing each character to its next alphabet letter
            for (char c : word) {
                newString += (c == 'z') ? 'a' : c + 1;
            }

            // Append the newly generated string to the original word
            word += newString;
        }
        return word[k-1];
    }
    /*
    Another approach 
    =================
    return 'a' + __builtin_popcount(k - 1);
    */
};