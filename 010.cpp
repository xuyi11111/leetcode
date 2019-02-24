class Solution {
public:
    bool isMatch(string s, string p) {
       regex reg1(p);  //#include <regex> using namespace std；之后才可以使用
       bool found = regex_match(s,reg1);//匹配正则表达式
       return found;
    }
};