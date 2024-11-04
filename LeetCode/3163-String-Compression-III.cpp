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
    /*
Another Solution runtime 0ms
============================
string compressedString(string word) {
        string temp;
        char last=word[0];
        int cnt=1;
        for(int i=1; i<word.size(); i++){
            if(last==word[i]){
                if(cnt<9){
                    ++cnt;
                    continue;
                }else{
                    temp.push_back(cnt+'0');
                    temp.push_back(last);
                    cnt=1;
                }
            }else{
                temp.push_back(cnt+'0');
                temp.push_back(last);
                cnt=1;
                last=word[i];
            }
        }
        temp.push_back(cnt+'0');
        temp.push_back(last);
        return temp;

*/
};

