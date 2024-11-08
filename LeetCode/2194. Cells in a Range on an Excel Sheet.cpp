class Solution {
public:
// A B C D E 
//A1:Z9
// كملة السر سيب الحروف زي ما هي و الارقام حولها سترينج
    vector<string> cellsInRange(string s) {
        vector<string>v;
       char col1 = s[0];
       char col2 = s[3];

       int row1 = s[1] - '0';
       int row2 = s[4] - '0';
        if(row1 == row2){

            for(char i =col1 ; i<=col2; i++){
                string s = i + to_string(row1);
                v.push_back(s);
            }
            return v;
        }else if(col1 == col2){
            for(int i =row1 ; i<=row2 ;i++){
                string s = col1 + to_string(i);
                v.push_back(s);
            }
            return v;
        }else{
            for(char i =col1 ; i<=col2; i++){
                for(int j =row1 ; j<=row2 ;j++){
                    string s = i + to_string(j);
                    v.push_back(s);
                }
            }
            return v;
        }
        return v;

    }
};

/*
Another Solution
=================
class Solution {
public:
    vector<string> cellsInRange(string s) {
        char start = s[0];
        char end = s[3];

        int element1 = s[1] - '0';
        int element2 = s[4] - '0';

        vector<string> v;

        while(start <= end)
        {
            int j = element1;
            while(j <= element2)
            {
                string temp = "";
                char ch = j + '0';
                temp.push_back(start);
                temp.push_back(ch);
                v.push_back(temp);
                j++;
            }
            start++;
        }
        return v;
    }
};
*/