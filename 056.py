#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:056.py
@ide:PyCharm
@create_time:2019/7/8 14:59
'''


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        k = 0
        len1 = len(intervals)
        print(intervals)
        while (k < len1 - 1):
            if (intervals[k][1] >= intervals[k + 1][0]):
                intervals[k][1] = max(intervals[k][1], intervals[k + 1][1])
                del intervals[k + 1]
                len1 -= 1
            else:
                k += 1
        return intervals
