#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:045_2.py
@ide:PyCharm
@create_time:2019/7/7 15:29
'''
#贪心算法

class Solution:
    def jump(self, nums):
        step=0
        end=0
        max_position=0
        for i in range(0,len(nums)-1):
            max_position=max(max_position,i+nums[i])
            if(i==end):
                step+=1
                end=max_position
        return step

        return ans[len(nums) - 1]
