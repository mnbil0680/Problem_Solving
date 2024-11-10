class Solution {
public:
    string CalcResult(string a, string b){
        char carry ='0';
        string result =\\;
        for(int i = a.size()-1 ;i>=0;i--){
            if(a[i] == '0' && b[i] == '0'){
                if(carry == '1'){
                    result += '1';
                    carry ='0';
                }else{
                    result += '0';
                    carry ='0';
                }
                
            }else if( a[i] =='1' && b[i]=='0' || a[i] =='0' && b[i]=='1' ){
                if(carry == '1'){
                    result += '0';
                    carry = '1';
                }else{
                    result += '1';
                    carry ='0';
                }
                
            }else{
                if(carry == '1'){
                    result +='1';
                    carry = '1';
                }else{
                    result +='0';
                    carry ='1';
                }
            }
        }
        if(carry =='1'){
            result += '1';
        }
        reverse(result.begin(), result.end());
        return result;

    }
    string addBinary(string a, string b) {
        if(a.size() == b.size()){
            return CalcResult(a,b);
        }else if(a.size() > b.size()){
            b.insert(0,a.size()-b.size(),'0');
             return CalcResult(a,b);
        }else{
            a.insert(0,b.size()-a.size(),'0');
             return CalcResult(a,b);
        }
    }
};
/*
Another Solution
================
class Solution {
public:
    string addBinary(string a, string b) {
        string res = \\;
        bool carry = false;
        for (int i = 0; i < max(a.length(), b.length()); ++i) {
            bool aBit = (i < a.length() ? a[a.length()-1-i] == '1' : false);
            bool bBit = (i < b.length() ? b[b.length()-1-i] == '1' : false);
            int sum = aBit + bBit + carry;
            res = (sum % 2 == 0 ? '0' : '1') + res;
            carry = sum >= 2;
        }
        if (carry) res = \1\ + res;
        return res;
    }
};
*/