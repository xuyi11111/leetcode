class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len=nums.size();//数组长度
        int ans=nums[0]+nums[1]+nums[2];//数组ans初始化
        sort(nums.begin(),nums.end());//数组排序
        for(int i=0;i<len-2;i++){
                int j=i+1;//j为i后面的一个数
                int k=len-1;//k为最后一个数
                while(j<k){
                    if(abs(nums[i]+nums[j]+nums[k]-target)<abs(ans-target)){//two point查找一个数
                        ans=nums[i]+nums[j]+nums[k];
                    }
                    if(nums[j]+nums[k]+nums[i]<target){
                        j++;
                    }
                    else if(nums[j]+nums[k]+nums[i]>target){
                        k--;
                    }
                    else{
                        return target;//相等直接返回target
                    }
                }
            }
        return ans;//未找到返回最接近
        }
};