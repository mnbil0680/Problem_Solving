class Solution {
public:

    bool isCircularSentence(string sentence) {
        bool edges = false;
        bool inside = true;
        short n = sentence.size() - 1; // end of string
        if (sentence[0] == sentence[n]) {
            edges = true;
        } else {
            return false;
        }
        for (short i = 0; i < n; i++) {
            if (int(sentence[i]) == 32 /*Space*/) {
                if (sentence[i - 1] == sentence[i + 1]) {
                    inside = true;
                } else {
                    return false;
                }
            }
        }
        return (edges && inside);
    }

};