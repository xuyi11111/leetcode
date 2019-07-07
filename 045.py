#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:045.py
@ide:PyCharm
@create_time:2019/7/7 15:19
'''


class Solution:
    def jump(self, nums):
        ans = [30000] * (len(nums) + 10)
        ans[0] = 0
        temp = -1
        for i in range(0, len(nums)):
            for j in range(1, nums[i] + 1):
                #动归减枝
                if (nums[i] + i) > temp:
                    ans[j + i] = min(ans[j + i], ans[i] + 1)
                else:
                    break
            temp = nums[i] + i
            # print('#')
        return ans[len(nums) - 1]

if __name__ == '__main__':
    nums=[2,3,1,1,4]
    a=Solution()
    ans=a.jump(nums)