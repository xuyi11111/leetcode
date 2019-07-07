#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:055.py
@ide:PyCharm
@create_time:2019/7/7 14:54
'''


class Solution:
    def canJump(self, nums: List[int]) -> bool:
        length = len(nums) - 1
        temp = 0
        max_temp = temp + nums[temp]
        while (temp <= max_temp):
            max_temp2 = temp + nums[temp]
            max_temp = max(max_temp2, max_temp)
            if temp >= length:
                return True
            temp += 1
        return False

