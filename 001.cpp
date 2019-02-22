class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        for(int i=0;i<len-1;i++){
            for(int j=i+1;j<=len-1;j++){
                if(nums[i]+nums[j]==target){
                     vector<int> temp;
                     temp.push_back(i);
                     temp.push_back(j);
                     return temp;
                }
            }
        }
    }
};
