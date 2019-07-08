#-----coding:utf-8------
'''
@project:leetcode
@author:yixu
@file:066.py
@ide:PyCharm
@create_time:2019/7/8 16:23
'''


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        len1 = len(digits)
        carry = 1
        for i in range(len1 - 1, -1, -1):
            if carry == 1:
                digits[i] += 1
                carry = 0
                if digits[i] == 10:
                    carry = 1
                    digits[i] = 0
            else:
                break
        if carry == 1:
            digits.insert(0, 1)
        return digits
