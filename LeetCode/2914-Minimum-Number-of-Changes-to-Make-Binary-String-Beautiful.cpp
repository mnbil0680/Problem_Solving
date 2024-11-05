class Solution {
public:
    int minChanges(string s) {
        int counter =0;
        for(int i =1;i<s.size();i+=2){
            if( s[i] != s[i-1] ){
                s[i] == '0'?s[i] = '1':s[i] = '0';
                counter++;
                
            }
        }
        return counter;
    }
};