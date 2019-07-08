#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:058.py
@ide:PyCharm
@create_time:2019/7/8 15:52
'''
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        long=s.strip().split(' ')
        return len(long[-1])


class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        len1 = len(s)
        temp = 0
        for i in range(len1 - 1, -1, -1):
            if s[i] == ' ':
                if temp > 0:
                    return temp
            else:
                temp += 1
        return temp

