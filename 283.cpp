class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=size(nums);//得到长度
        int k=0;
        for(int i=0;i<len;i++){
            if(nums[i]!=0){
                if(k!=0){
                    nums[i-k]=nums[i];//将数据往前移动
                }
            }
            else{
                k++;//统计0的个数
            }
        }
        for(int i=len-k;i<len;i++){
            nums[i]=0;//更改0；
        }
    }
};