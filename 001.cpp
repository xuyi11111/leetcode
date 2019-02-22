class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int max=nums.size()-1;
        int min=0;
        int min_2=min+1;
        int init=0;
        while(nums[min]+nums[min_2]!=target){
            if(init!=0){
                min++;
                min_2=min+1;
            }
            else{
                init=1;
            }
            while(nums[min]+nums[min_2]!=target){
                min_2++;
                if(min_2>=max){
                    break;
                }
            }
        }
        vector<int> temp;
        temp.push_back(min);
        temp.push_back(min_2);
        return temp;
    }
};
