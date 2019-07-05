#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:018.py
@ide:PyCharm
@create_time:2019/7/5 10:22
'''
class Solution:
    def fourSum(self, nums, target) :
        nums.sort()
        res = []
        for j in range(len(nums)):
            if j==0 or nums[j] > nums[j-1]:
                for i in range(j+1,len(nums)):
                    if i == j+1 or nums[i] > nums[i - 1] :#精髓在这里，因为后一个与前一个不一样，这样后面的重复数量必定是最多的。若是连号的话，那么就不会被触发
                        l = i + 1
                        r = len(nums) - 1
                        while l < r:
                            s = nums[i] + nums[l] + nums[r] + nums[j]
                            if s == target:
                                res.append([nums[i], nums[l], nums[r] ,nums[j]])
                                l += 1
                                r -= 1
                                while l < r and nums[l] == nums[l - 1]:
                                    l += 1
                                while r > l and nums[r] == nums[r + 1]:
                                    r -= 1
                            elif s > target:
                                r -= 1
                            else:
                                l += 1
        return res

if __name__=="__main__":
    nums = [0,0,0,0,0,0]
    target=1
    tt=Solution()
    add5=tt.fourSum(nums,target)
    print(add5)