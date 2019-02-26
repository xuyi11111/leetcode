class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;//<=0的数不可能为次幂后得到的数
        }
        while(n!=1){
            if(n%2==1){
                return false;//有余数，不可能为次幂
            }
            n/=2;//指数减小
        }
        return true;//返回1
    }
};