class Solution {
public:
    int reverse(int x) {
        long long output=0;
        bool flag=0;
        if(x==-pow(2,31)){
            return 0;//特例判断，因为若x最小，它取相反数后会溢出；
        }
        if(x<0){
            flag=true;//保存符号
            x*=(-1);
        }
        while(x>0){
            output=output*10+x%10;//反转数字
            x/=10;
        }
        if(flag==true){
            output*=(-1);//回归符号
        }
        if(output>(pow(2,31)-1)||output<(-pow(2,31))){
            return 0;//判断溢出
        }
        return output;//强制变成int并返回。
    }
};