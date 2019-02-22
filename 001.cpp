class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        int min,max;
        for(int i=0;i<len-1;i++){
            for(int j=i+1;j<=len-1;j++){
                if((nums[i]+nums[j])==target){
                    min=i;
                    max=j;
                }
            }
        }
        vector<int> temp;
        temp.push_back(min);
        temp.push_back(max);
        return temp;
    }
};

