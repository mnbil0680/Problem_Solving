class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int counter = 1;
        for (int i = 1; i <= word.size(); i++) {
            if (word[i] == word[i - 1]) {
                counter++;
            } else {
                while (counter > 9) {
                    comp += to_string(9) + word[i - 1];
                    counter -= 9;
                }
                comp += to_string(counter) + word[i - 1];
                counter = 1;
            }
        }
        return comp;
    }
};