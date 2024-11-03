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
        string s="a";
        while(k>=s.size())
        {
            string up="";
            for(int i=0;i<s.size();i++)
            {
               char m=s[i]+1; 
                up+=m;
            }
            s+=up;
        }
       char ans=s[k-1];
        return ans;  
    }
    /*
    Another approach 
    =================
    return 'a' + __builtin_popcount(k - 1);
    */
};