class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int len=size(nums);
        int sum=0;
        for(int i=0;i<len;i++){
            sum+=nums[i];
        }
        if(sum%2==1){
            return false;
        }
        int sum2=sum/2;
        int sum1=0;
        return n0_1backpack(nums,len,0,sum1,sum2);
    }
    bool n0_1backpack(vector<int>& nums,int len,int i,int sum1,int sum2){
        if(sum2<sum1){
            return false;
        }
        else if(sum2==sum1){
            return true;
        }
        if(i>=len-1){
            return false;
        }
        bool flag1=false,flag2=false;
        if(sum1+nums[i]<=sum2){
            sum1+=nums[i];
            i++;
            flag1=n0_1backpack(nums,len,i,sum1,sum2) ;
            i--;
            sum1-=nums[i];
        }
        i++;
        flag2=n0_1backpack(nums,len,i,sum1,sum2) ;
        if(flag1||flag2){
            return true;
        }
        return false;
    }
};