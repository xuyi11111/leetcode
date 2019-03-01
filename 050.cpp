class Solution {
public:
    double myPow(double x, int n) {
        if(n==0||x==1){//返回0的特例
            return 1;
        }
        double ans=pow_zz(x,n);
        if(n<0){
            return 1/ans;//若为负数返回倒数
        }
        return ans;//返回值
    }
    double pow_zz(double y,int n){
        if(n==1||n==-1){//为1时返回正常值
            return y;
        }
        if(n%2==0){
            return pow_zz(y*y,n/2);//快速幂
        }
        return pow_zz(y*y,n/2)*y;//为奇数就翻倍再乘以自己
    }
    
};