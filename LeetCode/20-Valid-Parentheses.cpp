class Solution {
public:
    bool isValid(string s) {
        const int CIRCLE_PAR = 81;
        const int SQUARE_PAR = 184;
        const int CURVY_PAR = 248;

        if (s[0] == ')' || s[0] == '}' || s[0] == ']' || s.size() % 2 != 0) {
            return false;
        } else {
            vector<char> v;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    v.push_back(s[i]);
                } else {
                    if (!v.empty()) {
                        if (s[i] + v.back() == CIRCLE_PAR ||
                            s[i] + v.back() == SQUARE_PAR ||
                            s[i] + v.back() == CURVY_PAR) {
                            v.pop_back();
                        } else {
                            v.insert(v.begin(), s[i]);
                        }

                    } else {
                        v.insert(v.begin(), s[i]);
                    }

                    // ]
                }
            }
            if (v.empty()) {
                return true;
            } else {
                return false;
            }
        }
    }
};