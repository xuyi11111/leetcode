#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:069.py
@ide:PyCharm
@create_time:2019/7/8 16:34
'''

#采用无限逼近的方法
class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0 or x == 1:
            return x
        n = x
        while 1:
            m = x / n
            n = (m + n) / 2
            if n - m < 1:
                break
        return int(n)
