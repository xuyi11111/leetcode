class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0;
        int j=sqrt(c);//开方后为边界
        while(i<=j){
            if((pow(i,2)+pow(j,2))<c){
                i++;//两个端点进行查找，小了加左边
            }
            else if((pow(i,2)+pow(j,2))==c){
                return true;//找到
            }
            else{
                j--;//打了减去右边
            }
        }
        return false;//没找到
    }
};