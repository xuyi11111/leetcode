#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:004.py
@ide:PyCharm
@create_time:2019/7/4 20:37
'''
'''
注意超时的优化，如果不予处理的话，全是0的情况会导致出错
'''
class Solution:
    def threeSum(self, nums):
        nums.sort()
        res = []
        i = 0
        for i in range(len(nums)):
            if i == 0 or nums[i] > nums[i - 1]:#精髓在这里，因为后一个与前一个不一样，这样后面的重复数量必定是最多的。若是连号的话，那么就不会被触发
                l = i + 1
                r = len(nums) - 1
                while l < r:
                    s = nums[i] + nums[l] + nums[r]
                    if s == 0:
                        res.append([nums[i], nums[l], nums[r]])
                        l += 1
                        r -= 1
                        while l < r and nums[l] == nums[l - 1]:#注意这里的滑动
                            l += 1
                        while r > l and nums[r] == nums[r + 1]:
                            r -= 1
                    elif s > 0:
                        r -= 1
                    else:
                        l += 1
        return res

if __name__=="__main__":
    nums = [0,0,0,0,0,0]
    tt=Solution()
    add5=tt.threeSum(nums)
    print(add5)
