class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;//负数不可能回文
        }
        string ss=to_string(x);//转换字符串
        int len=ss.length();//长度
        int halflen=len/2;//一半
        for(int i=0;i<=halflen;i++){
            if(ss[i]!=ss[len-i-1]){//检验
                return false;//不对就返回失败
            }
        }
        return true;//返回成功
    }
};