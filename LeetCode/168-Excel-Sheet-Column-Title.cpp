
class Solution {
public:
\tchar Convert_Numbers_Characters(int num) {
\t\tif (num == 0) {
\t\t\treturn 'Z';
\t\t}
\t\treturn char(num + 64);
\t}
\tstring convertToTitle(int columnNumber) {
\t\tstring temp = \\;
\t\tfloat remainder;
\t\tint counter = 1;
\t\tbool flag = true;
\t\twhile (columnNumber > 0 && flag) {
\t\t\tlong long powerOF26Num = pow(26, counter);
\t\t\tlong long powerOF26NumMinus1 = pow(26, counter - 1);
\t\t\tremainder = columnNumber % powerOF26Num;
\t\t\tint numOFchar = remainder / powerOF26NumMinus1;
\t\t\ttemp += Convert_Numbers_Characters(numOFchar);
\t\t\tif (remainder == 0) {
\t\t\t\tcolumnNumber -= 26;
\t\t\t\tif (columnNumber < powerOF26Num) {
\t\t\t\t\tflag = false;
\t\t\t\t}
\t\t\t\telse {
\t\t\t\t\tflag = true;
\t\t\t\t}
\t\t\t}
\t\t\telse {
\t\t\t\tcolumnNumber -= int(remainder);

\t\t\t}

\t\t\tcounter++;
\t\t}
\t\treverse(temp.begin(), temp.end());
\t\treturn temp;
\t}
};